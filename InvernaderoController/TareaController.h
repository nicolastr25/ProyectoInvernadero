#pragma once

namespace InvernaderoController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace InvernaderoModel;

	public ref class TareaController {

	public:
		TareaController();

		List<Tarea^>^ buscarTodos();
		Tarea^ buscarTareaxDescripcion(String^ descripcion);
		void agregarTarea(String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona);
		void eliminarTarea(String^ descripcionEliminar);
		void escribirArchivo(List<Tarea^>^ listaTareas);
	};
}
