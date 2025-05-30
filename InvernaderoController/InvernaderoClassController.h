#pragma once

namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class InvernaderoCController {

	public:
		InvernaderoCController();
		List<Invernadero^>^ buscarTodos();
		Invernadero^ buscarInvernaderoxNombre(String^ nombre);
		List<Invernadero^>^ buscarInvernaderoxNombre_(String^ nombre);
		void eliminarInvernadero(String^ nombreEliminar);
		void agregarInvernadero(String^ nombre, String^ ubicacion);
		void escribirArchivo(List<Invernadero^>^ listaInvernaderos);
		void actualizarInvernadero(String^ nombre, String^ ubicacion);
	};
}