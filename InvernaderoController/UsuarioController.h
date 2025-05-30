#pragma once

namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class UsuarioController {

	public:
		UsuarioController();
		List<Usuario^>^ buscarTodos();
		Usuario^ buscarUsuarioxCodigo(int codigo);
		List<Usuario^>^ buscarUsuarioxNombrexUser(String^ nombre, String^ user);
		void eliminarUsuario(int codigoEliminar);
		void agregarUsuario(int codigo, String^ nombre, String^ user, String^ clave);
		void escribirArchivo(List<Usuario^>^ listaUsuarios);
		void actualizarUsuario(int codigo, String^ nombre, String^ user, String^ clave);
	};
}

