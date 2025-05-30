#include "UsuarioController.h"

using namespace InvernaderoController;
using namespace System::IO;

UsuarioController::UsuarioController() {

}

List<Usuario^>^ UsuarioController::buscarTodos() {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ userFile = campos[2];
		String^ claveFile = campos[3];
		Usuario^ usuario = gcnew Usuario(codigoFile, nombreFile, userFile, claveFile);
		listaUsuarios->Add(usuario);
	}
	return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarUsuarioxNombrexUser(String^ nombre, String^ user) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ userFile = campos[2];
		String^ claveFile = campos[3];
		if (nombreFile->Contains(nombre) && userFile->Contains(user)) {
			Usuario^ usuario = gcnew Usuario(codigoFile, nombreFile, userFile, claveFile);
			listaUsuarios->Add(usuario);
		}
	}
	return listaUsuarios;
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarTodos();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ usuario = listaUsuarios[i];
		if (usuario->getCodigo() == codigo) {
			return usuario;
		}
	}
}

void UsuarioController::agregarUsuario(int codigo, String^ nombre, String^ user, String^ clave) {
	List<Usuario^>^ listaUsuarios = buscarTodos();
	Usuario^ usuarioNuevo = gcnew Usuario(codigo, nombre, user, clave);
	listaUsuarios->Add(usuarioNuevo);
	escribirArchivo(listaUsuarios);
}

void UsuarioController::escribirArchivo(List<Usuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ usuario = listaUsuarios[i];
		lineasArchivo[i] = usuario->getCodigo() + ";" + usuario->getNombre() + ";" + usuario->getUser() + ";" + usuario->getClave();
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void UsuarioController::eliminarUsuario(int codigoEliminar) {
	List<Usuario^>^ listaUsuarios = buscarTodos();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ usuario = listaUsuarios[i];
		if (usuario->getCodigo() == codigoEliminar) {
			//Aqui ya elimine al que queria de la lista
			listaUsuarios->RemoveAt(i);
			break;
		}
	}
	//Vuelvo a escribir la lista en el archivo, sin considerar al eliminado
	escribirArchivo(listaUsuarios);
}

void UsuarioController::actualizarUsuario(int codigo, String^ nombre, String^ user, String^ clave) {
	List<Usuario^>^ listaUsuarios = buscarTodos();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ usuario = listaUsuarios[i];
		if (usuario->getCodigo() == codigo) {
			usuario->setNombre(nombre);
			usuario->setUser(user);
			usuario->setClave(clave);
			listaUsuarios[i] = usuario;
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}