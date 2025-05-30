#include "EmpresaController.h"

using namespace InvernaderoController;
using namespace System::IO;

EmpresaController::EmpresaController() {
}

List<Empresa^>^ EmpresaController::buscarTodas() {
	List<Empresa^>^ listaEmpresas = gcnew List<Empresa^>();
	array<String^>^ lineas = File::ReadAllLines("Empresas.txt");
	String^ separadores = ";";

	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		String^ nombreFile = campos[0];
		String^ rucFile = campos[1];
		String^ direccionFiscalFile = campos[2];
		String^ telefonoFile = campos[3];
		String^ emailFile = campos[4];

		Empresa^ empresa = gcnew Empresa(nombreFile, rucFile, direccionFiscalFile, telefonoFile, emailFile);
		listaEmpresas->Add(empresa);
	}
	return listaEmpresas;
}

Empresa^ EmpresaController::buscarEmpresaxRUC(String^ ruc) {
	List<Empresa^>^ listaEmpresas = buscarTodas();
	for each (Empresa ^ empresa in listaEmpresas) {
		if (empresa->getRuc() == ruc) {
			return empresa;
		}
	}
	return nullptr;
}

void EmpresaController::agregarEmpresa(String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email) {
	List<Empresa^>^ listaEmpresas = buscarTodas();
	Empresa^ nuevaEmpresa = gcnew Empresa(nombre, ruc, direccionFiscal, telefono, email);
	listaEmpresas->Add(nuevaEmpresa);
	escribirArchivo(listaEmpresas);
}

void EmpresaController::eliminarEmpresa(String^ rucEliminar) {
	List<Empresa^>^ listaEmpresas = buscarTodas();
	for (int i = 0; i < listaEmpresas->Count; i++) {
		if (listaEmpresas[i]->getRuc() == rucEliminar) {
			listaEmpresas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaEmpresas);
}

void EmpresaController::escribirArchivo(List<Empresa^>^ listaEmpresas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaEmpresas->Count);
	for (int i = 0; i < listaEmpresas->Count; i++) {
		Empresa^ empresa = listaEmpresas[i];
		lineasArchivo[i] = empresa->getNombre() + ";" + empresa->getRuc() + ";" + empresa->getDireccionFiscal() + ";" + empresa->getTelefono() + ";" + empresa->getEmail();
	}
	File::WriteAllLines("Empresas.txt", lineasArchivo);
}
