#pragma once


namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class DepartamentoController {

	public:
		DepartamentoController();
		List<Departamento^>^ buscarTodos();
		Departamento^ buscarDepartamentoxCodigo(int codigo);
		List<Departamento^>^ buscarDepartamentoxNombrexRegion(String^ nombre, String^ region);
		void eliminarDepartamento(int codigoEliminar);
		void agregarDepartamento(int codigo, String^ nombre, String^ region);
		void escribirArchivo(List<Departamento^>^ listaDepartamentos);
		void actualizarDepartamento(int codigo, String^ nombre, String^ region);

	};
}