#include "TareaController.h"

using namespace InvernaderoController;
using namespace System::IO;

TareaController::TareaController() {

}

List<Tarea^>^ TareaController::buscarTodos() {
	List<Tarea^>^ listaTareas = gcnew List<Tarea^>();
	array<String^>^ lineas = File::ReadAllLines("Tareas.txt");
	String^ separadores = ";";

	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ descripcionFile = campos[1];
		String^ fechaLimiteFile = campos[2];
		String^ estadoFile = campos[3];
		Tarea^ tarea = gcnew Tarea(codigoFile, descripcionFile, fechaLimiteFile, estadoFile, nullptr);
		listaTareas->Add(tarea);
	}

	return listaTareas;
}

List<Tarea^>^ TareaController::buscarTareaxDescripcionxEstado(String^ descripcion, String^ estado) {
	List<Tarea^>^ listaTareas = gcnew List<Tarea^>();
	array<String^>^ lineas = File::ReadAllLines("Tareas.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ descripcionFile = campos[1];
		String^ fechaLimiteFile = campos[2];
		String^ estadoFile = campos[3];
		if (descripcionFile->Contains(descripcion) && estadoFile->Contains(estado)) {
			Tarea^ tarea = gcnew Tarea(codigoFile, descripcionFile, fechaLimiteFile, estadoFile, nullptr);
			listaTareas->Add(tarea);
		}
	}
	return listaTareas;
}

Tarea^ TareaController::buscarTareaxCodigo(int codigo) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getCodigo() == codigo) {
			return tarea;
		}
	}
	return nullptr;
}



void TareaController::agregarTarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona) {
	List<Tarea^>^ listaTareas = buscarTodos();
	Tarea^ tareaNueva = gcnew Tarea(codigo, descripcion, fechaLimite, estado, zona);
	listaTareas->Add(tareaNueva);
	escribirArchivo(listaTareas);
}

void TareaController::escribirArchivo(List<Tarea^>^ listaTareas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaTareas->Count);
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		lineasArchivo[i] = tarea-> getCodigo() + ";" + tarea->getDescripcion() + ";" + tarea->getFechaLimite() + ";" + tarea->getEstado();
	}
	File::WriteAllLines("Tareas.txt", lineasArchivo);
}

void TareaController::eliminarTarea(int codigoEliminar) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getCodigo() == codigoEliminar) {
			listaTareas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaTareas);
}

void TareaController::actualizarTarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getDescripcion() == descripcion) {
			tarea->setFechaLimite(fechaLimite);
			tarea->setEstado(estado);
			tarea->setZona(zona);
			listaTareas[i] = tarea;
			break;
		}
	}
	escribirArchivo(listaTareas);
}
