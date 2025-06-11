#pragma once

namespace InvernaderoController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace InvernaderoModel;

	public ref class TareaController {

	public:
		TareaController();

		List<Tarea^>^ buscarTodos();
		Tarea^ buscarTareaxCodigo(int codigo);
		List<Tarea^>^ buscarTareaxDescripcionxEstado(String^ descripcion, String^ estado);
		void agregarTarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona);
		void eliminarTarea(int codigoEliminar);
		void escribirArchivo(List<Tarea^>^ listaTareas);
		void actualizarTarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona);
	};
}
