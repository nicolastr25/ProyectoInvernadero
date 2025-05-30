#include "DepartamentoController.h"


using namespace InvernaderoController;
using namespace System::IO;
DepartamentoController::DepartamentoController() {

}
List<Departamento^>^ DepartamentoController::buscarTodos() {
	List<Departamento^>^ listaDepartamentos = gcnew List<Departamento^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Departamentos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ regionFile = campos[2];


		Departamento^ departamento = gcnew Departamento(codigoFile, nombreFile, regionFile);
		listaDepartamentos->Add(departamento);

	}
	return listaDepartamentos;
}
Departamento^ DepartamentoController::buscarDepartamentoxCodigo(int codigo) {
	List<Departamento^>^ listaDepartamentos = buscarTodos();
	for (int i = 0; i < listaDepartamentos->Count; i++) {
		Departamento^ Departamento = listaDepartamentos[i];
		if (Departamento->getCodigo() == codigo) {
			return Departamento;
		}
	}
}
List<Departamento^>^ DepartamentoController::buscarDepartamentoxNombrexRegion(String^ nombre, String^ region) {
	List<Departamento^>^ listaDepartamentos = gcnew List<Departamento^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Departamentos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ regionFile = campos[2];

		if (nombreFile->Contains(nombre) && regionFile->Contains(region)) {
			Departamento^ departamento = gcnew Departamento(codigoFile, nombreFile, regionFile);
			listaDepartamentos->Add(departamento);
		}
	}
	return listaDepartamentos;
}
void DepartamentoController::eliminarDepartamento(int codigoEliminar) {
	List<Departamento^>^ listaDepartamentos = buscarTodos();
	for (int i = 0; i < listaDepartamentos->Count; i++) {
		Departamento^ Departamento = listaDepartamentos[i];
		if (Departamento->getCodigo() == codigoEliminar) {
			//Aqui ya elimine al que queria de la lista
			listaDepartamentos->RemoveAt(i);
			break;
		}
	}
	//Vuelvo a escribir la lista en el archivo, sin considerar al eliminado
	escribirArchivo(listaDepartamentos);

}
void DepartamentoController::agregarDepartamento(int codigo, String^ nombre, String^ region) {
	List<Departamento^>^ listaDepartamentos = buscarTodos();
	Departamento^ departamentoNuevo = gcnew Departamento(codigo, nombre, region);
	listaDepartamentos->Add(departamentoNuevo);
	escribirArchivo(listaDepartamentos);

}
void DepartamentoController::escribirArchivo(List<Departamento^>^ listaDepartamentos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDepartamentos->Count);
	for (int i = 0; i < listaDepartamentos->Count; i++) {
		Departamento^ Departamento = listaDepartamentos[i];
		lineasArchivo[i] = Departamento->getCodigo() + ";" + Departamento->getNombre() + ";" + Departamento->getRegion();
	}
	File::WriteAllLines("Departamentos.txt", lineasArchivo);

}
void DepartamentoController::actualizarDepartamento(int codigo, String^ nombre, String^ region) {
	List<Departamento^>^ listaDepartamentos = buscarTodos();
	for (int i = 0; i < listaDepartamentos->Count; i++) {
		Departamento^ Departamento = listaDepartamentos[i];
		if (Departamento->getCodigo() == codigo) {
			Departamento->setNombre(nombre);
			Departamento->setRegion(region);

			listaDepartamentos[i] = Departamento;
			break;
		}
	}
	escribirArchivo(listaDepartamentos);
}