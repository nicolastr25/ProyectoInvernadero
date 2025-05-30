#pragma once

namespace InvernaderoController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace InvernaderoModel; // Aseg�rate de que la clase Empresa est� dentro de este namespace

	public ref class EmpresaController {

	public:
		EmpresaController();
		List<Empresa^>^ buscarTodas();
		Empresa^ buscarEmpresaxRUC(String^ ruc);
		void agregarEmpresa(String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email);
		void eliminarEmpresa(String^ ruc);
		void escribirArchivo(List<Empresa^>^ listaEmpresas);
	};

}
