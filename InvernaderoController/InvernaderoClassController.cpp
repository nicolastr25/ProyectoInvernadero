#include "InvernaderoClassController.h"

using namespace InvernaderoController;
using namespace System::IO;

InvernaderoCController::InvernaderoCController() {

}

List<Invernadero^>^ InvernaderoCController::buscarTodos() {
	List<Invernadero^>^ listaInvernaderos = gcnew List<Invernadero^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Invernaderos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		String^ nombreFile = campos[0];
		String^ ubicacionFile = campos[1];
		Invernadero^ invernadero = gcnew Invernadero(nombreFile , ubicacionFile);
		listaInvernaderos->Add(invernadero);
	}
	return listaInvernaderos;
}

List<Invernadero^>^ InvernaderoCController::buscarInvernaderoxNombre_(String^ nombre) {
	List<Invernadero^>^ listaInvernaderos = gcnew List<Invernadero^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Invernaderos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		String^ nombreFile = campos[0];
		String^ ubicacionFile = campos[1];
		if (nombreFile->Contains(nombre)) {
			Invernadero^ invernadero = gcnew Invernadero(nombreFile, ubicacionFile);
			listaInvernaderos->Add(invernadero);
		}
	}
	return listaInvernaderos;
}

Invernadero^ InvernaderoCController::buscarInvernaderoxNombre(String^ nombre) {
	List<Invernadero^>^ listaInvernaderos = buscarTodos();
	for (int i = 0; i < listaInvernaderos->Count; i++) {
		Invernadero^ invernadero = listaInvernaderos[i];
		if (invernadero->getNombre() == nombre) {
			return invernadero;
		}
	}
}

void InvernaderoCController::agregarInvernadero(String^ nombre, String^ ubicacion) {
	List<Invernadero^>^ listaInvernaderos = buscarTodos();
	Invernadero^ invernaderoNuevo = gcnew Invernadero(nombre, ubicacion);
	listaInvernaderos->Add(invernaderoNuevo);
	escribirArchivo(listaInvernaderos);
}

void InvernaderoCController::escribirArchivo(List<Invernadero^>^ listaInvernaderos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaInvernaderos->Count);
	for (int i = 0; i < listaInvernaderos->Count; i++) {
		Invernadero^ invernadero = listaInvernaderos[i];
		lineasArchivo[i] = invernadero->getNombre() + ";" + invernadero->getUbicacion() + ";";
	}
	File::WriteAllLines("Invernaderos.txt", lineasArchivo);
}

void InvernaderoCController::eliminarInvernadero(String^ nombreEliminar) {
	List<Invernadero^>^ listaInvernaderos = buscarTodos();
	for (int i = 0; i < listaInvernaderos->Count; i++) {
		Invernadero^ invernadero = listaInvernaderos[i];
		if (invernadero->getNombre() == nombreEliminar) {
			//Aqui ya elimine al que queria de la lista
			listaInvernaderos->RemoveAt(i);
			break;
		}
	}
	//Vuelvo a escribir la lista en el archivo, sin considerar al eliminado
	escribirArchivo(listaInvernaderos);
}
void InvernaderoCController::actualizarInvernadero(String^ nombre, String^ ubicacion) {
	List<Invernadero^>^ listaInvernaderos = buscarTodos();
	for (int i = 0; i < listaInvernaderos->Count; i++) {
		Invernadero^ Invernadero = listaInvernaderos[i];
		if (Invernadero->getNombre() == nombre) {
			Invernadero->setUbicacion(ubicacion);
			listaInvernaderos[i] = Invernadero;
			break;
		}
	}
	escribirArchivo(listaInvernaderos);
}