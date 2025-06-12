#pragma once

namespace InvernaderoController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace InvernaderoModel; // Asegúrate de que la clase Empresa esté dentro de este namespace

	public ref class EmpresaController {

	public:
		EmpresaController();
		List<Empresa^>^ buscarTodos();
		Empresa^ buscarEmpresaxCodigo(int codigo);
		List<Empresa^>^ buscarEmpresaxNombrexRuc(String^ nombre, String^ ruc);
		void agregarEmpresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email);
		void eliminarEmpresa(int codigo);
		void escribirArchivo(List<Empresa^>^ listaEmpresas);
		void actualizarEmpresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email);
	};

}
