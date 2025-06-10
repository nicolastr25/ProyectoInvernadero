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
		List<Tarea^>^ buscarListaTareaxDescripcion(String^ descripcion);
		void agregarTarea(int id, String^ descripcion, String^ fechaLimite, String^ estado);
		void eliminarTarea(String^ descripcionEliminar);
		void escribirArchivo(List<Tarea^>^ listaTareas);
		void actualizarTarea(int id, String^ descripcion, String^ fechaLimite, String^ estado);



	};
}
