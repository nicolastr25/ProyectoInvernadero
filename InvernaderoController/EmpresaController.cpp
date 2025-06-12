#include "EmpresaController.h"

using namespace InvernaderoController;
using namespace System::IO;

EmpresaController::EmpresaController() {
}

List<Empresa^>^ EmpresaController::buscarTodos() {
	List<Empresa^>^ listaEmpresas = gcnew List<Empresa^>();
	array<String^>^ lineas = File::ReadAllLines("Empresas.txt");
	String^ separadores = ";";

	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ rucFile = campos[2];
		String^ direccionFiscalFile = campos[3];
		String^ telefonoFile = campos[4];
		String^ emailFile = campos[5];

		Empresa^ empresa = gcnew Empresa(codigoFile, nombreFile, rucFile, direccionFiscalFile, telefonoFile, emailFile);
		listaEmpresas->Add(empresa);
	}
	return listaEmpresas;
}

List<Empresa^>^ EmpresaController::buscarEmpresaxNombrexRuc(String^ nombre, String^ ruc) {
	List<Empresa^>^ listaEmpresas = gcnew List<Empresa^>();
	array<String^>^ lineas = File::ReadAllLines("Empresas.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ nombreFile = campos[1];
		String^ rucFile = campos[2];
		String^ direccionFiscalFile = campos[3];
		String^ telefonoFile = campos[4];
		String^ emailFile = campos[5];
		if (nombreFile->Contains(nombre) && rucFile->Contains(ruc)) {
			Empresa^ empresa = gcnew Empresa(codigoFile, nombreFile, rucFile, direccionFiscalFile, telefonoFile, emailFile);
			listaEmpresas->Add(empresa);
		}
	}
	return listaEmpresas;
}

Empresa^ EmpresaController::buscarEmpresaxCodigo(int codigo) {
	List<Empresa^>^ listaEmpresas = buscarTodos();
	for (int i = 0; i < listaEmpresas->Count; i++) {
		Empresa^ empresa = listaEmpresas[i];
		if (empresa->getCodigo() == codigo) {
			return empresa;
		}
	}
	return nullptr;
}



void EmpresaController::agregarEmpresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email) {
	List<Empresa^>^ listaEmpresas = buscarTodos();
	Empresa^ nuevaEmpresa = gcnew Empresa(codigo, nombre, ruc, direccionFiscal, telefono, email);
	listaEmpresas->Add(nuevaEmpresa);
	escribirArchivo(listaEmpresas);
}

void EmpresaController::eliminarEmpresa(int codigoEliminar) {
	List<Empresa^>^ listaEmpresas = buscarTodos();
	for (int i = 0; i < listaEmpresas->Count; i++) {
		Empresa^ empresa = listaEmpresas[i];
		if (empresa->getCodigo() == codigoEliminar) {
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
		lineasArchivo[i] = empresa->getCodigo() + ";" + empresa->getNombre() + ";" + empresa->getRuc() + ";" + empresa->getDireccionFiscal() + ";" + empresa->getTelefono() + ";" + empresa->getEmail();
	}
	File::WriteAllLines("Empresas.txt", lineasArchivo);
}

void EmpresaController::actualizarEmpresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email) {
	List<Empresa^>^ listaEmpresas = buscarTodos();
	for (int i = 0; i < listaEmpresas->Count; i++) {
		Empresa^ empresa = listaEmpresas[i];
		if (empresa->getCodigo() == codigo) {
			empresa->setNombre(nombre);
			empresa->setRuc(ruc);
			empresa->setDireccionFiscal(direccionFiscal);
			empresa->setTelefono(telefono);
			empresa->setEmail(email);
			listaEmpresas[i] = empresa;
			break;
		}
	}
	escribirArchivo(listaEmpresas);
}