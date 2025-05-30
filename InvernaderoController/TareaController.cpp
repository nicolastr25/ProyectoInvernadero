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

		String^ descripcionFile = campos[0];
		String^ fechaLimiteFile = campos[1];
		String^ estadoFile = campos[2];
		Tarea^ tarea = gcnew Tarea(descripcionFile, fechaLimiteFile, estadoFile);
		listaTareas->Add(tarea);
	}

	return listaTareas;
}

Tarea^ TareaController::buscarTareaxDescripcion(String^ descripcion) {
	List<Tarea^>^ listaTareas = buscarTodos();
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		if (tarea->getDescripcion()->Contains(descripcion)) {
			return tarea;
		}
	}
	return nullptr;
}

void TareaController::agregarTarea(String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona) {
	List<Tarea^>^ listaTareas = buscarTodos();
	Tarea^ tareaNueva = gcnew Tarea(descripcion, fechaLimite, estado);
	listaTareas->Add(tareaNueva);
	escribirArchivo(listaTareas);
}

void TareaController::escribirArchivo(List<Tarea^>^ listaTareas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaTareas->Count);
	for (int i = 0; i < listaTareas->Count; i++) {
		Tarea^ tarea = listaTareas[i];
		lineasArchivo[i] = tarea->getDescripcion() + ";" +
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