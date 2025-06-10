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
		int idFile = Convert::ToInt32(campos[0]);
		String^ descripcionFile = campos[1];
		String^ fechaLimiteFile = campos[2];
		String^ estadoFile = campos[3];
		Tarea^ tarea = gcnew Tarea(idFile,descripcionFile, fechaLimiteFile, estadoFile);
		listaTareas->Add(tarea);
	}

	return listaTareas;
}

Tarea^ TareaController::buscarTareaxDescripcion(String^ descripcion) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getDescripcion()->Equals(descripcion)) {
			return tarea;
		}
	}
	return nullptr;
}
List<Tarea^>^ TareaController::buscarListaTareaxDescripcion(String^ descripcion) {
	List<Tarea^>^ listaTareas = buscarTodos();
	List<Tarea^>^ listaTareasxDescripcion = gcnew List<Tarea^>();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getDescripcion()->Contains(descripcion)) {
			listaTareasxDescripcion->Add(tarea);
		}
	}
	return listaTareasxDescripcion;
}

void TareaController::agregarTarea(int id,String^ descripcion, String^ fechaLimite, String^ estado) {
	List<Tarea^>^ listaTareas = buscarTodos();
	Tarea^ tareaNueva = gcnew Tarea(id, descripcion, fechaLimite, estado);
	listaTareas->Add(tareaNueva);
	escribirArchivo(listaTareas);
}

void TareaController::escribirArchivo(List<Tarea^>^ listaTareas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaTareas->Count);
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		lineasArchivo[i] = tarea->getId() + ";" + tarea->getDescripcion() + ";" +
			tarea->getFechaLimite() + ";" +
			tarea->getEstado() + ";";
	}
	File::WriteAllLines("Tareas.txt", lineasArchivo);
}

void TareaController::eliminarTarea(String^ descripcionEliminar) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getDescripcion()->Equals(descripcionEliminar)) {
			listaTareas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaTareas);
}
void TareaController::actualizarTarea(int id, String^ descripcion, String^ fechaLimite, String^ estado) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ Tarea = listaTareas[i];
		if (Tarea->getId() == id) {
			Tarea->setDescripcion(descripcion);
			Tarea->setFechaLimite(fechaLimite);
			Tarea->setEstado(estado);
			
			listaTareas[i] = Tarea;
			break;
		}
	}
	escribirArchivo(listaTareas);
}

