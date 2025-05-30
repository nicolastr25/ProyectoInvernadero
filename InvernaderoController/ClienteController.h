#pragma once

namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class ClienteController {

	public:
		ClienteController();
		List<Cliente^>^ buscarTodos();
		Cliente^ buscarClientexCodigo(int codigo);
		List<Cliente^>^ buscarClientexNombrexDni(String^ nombre, String^ dni);
		void eliminarCliente(int codigoEliminar);
		void agregarCliente(int codigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion, Distrito^ distrito);
		void escribirArchivo(List<Cliente^>^ listaClientes);
		void actualizarCliente(int codigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion, Distrito^ distrito);
	};
}


