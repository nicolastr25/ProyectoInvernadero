#include "CultivoController.h"

using namespace InvernaderoController;
using namespace System::IO;

CultivoController::CultivoController() {

}

List<Cultivo^>^ CultivoController::buscarTodos() {
	List<Cultivo^>^ listaCultivos = gcnew List<Cultivo^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Cultivos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		String^ nombreFile = campos[0];
		String^ tipoFile = campos[1];
		String^ etapaFile = campos[2];
		float reqTempFile = Convert::ToDouble(campos[3]);
		float reqHumFile = Convert::ToDouble(campos[4]);
		float reqLuzFile = Convert::ToDouble(campos[5]);
		Cultivo^ cultivo = gcnew Cultivo(nombreFile, tipoFile, etapaFile, reqTempFile, reqHumFile, reqLuzFile);
		listaCultivos->Add(cultivo);
	}
	return listaCultivos;
}

List<Cultivo^>^ CultivoController::buscarCultivoxNombre_(String^ nombre) {
	List<Cultivo^>^ listaCultivos = gcnew List<Cultivo^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("Cultivos.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		String^ nombreFile = campos[0];
		String^ tipoFile = campos[1];
		String^ etapaFile = campos[2];
		float reqTempFile = Convert::ToDouble(campos[3]);
		float reqHumFile = Convert::ToDouble(campos[4]);
		float reqLuzFile = Convert::ToDouble(campos[5]);
		if (nombreFile->Contains(nombre)) {
			Cultivo^ cultivo = gcnew Cultivo(nombreFile, tipoFile, etapaFile, reqTempFile, reqHumFile, reqLuzFile);
			listaCultivos->Add(cultivo);
		}
	}
	return listaCultivos;
}

Cultivo^ CultivoController::buscarCultivoxNombre(String^ nombre) {
	List<Cultivo^>^ listaCultivos = buscarTodos();
	for (int i = 0; i < listaCultivos->Count; i++) {
		Cultivo^ cultivo = listaCultivos[i];
		if (cultivo->getNombre() == nombre) {
			return cultivo;
		}
	}
}

void CultivoController::agregarCultivo(String^ nombre, String^ tipo, String^ etapa, float requerimientoTemp, float requerimientoHumedad, float requerimientoLuz) {
	List<Cultivo^>^ listaCultivos = buscarTodos();
	Cultivo^ cultivoNuevo = gcnew Cultivo(nombre, tipo, etapa, requerimientoTemp, requerimientoHumedad, requerimientoLuz);
	listaCultivos->Add(cultivoNuevo);
	escribirArchivo(listaCultivos);
}

void CultivoController::escribirArchivo(List<Cultivo^>^ listaCultivos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCultivos->Count);
	for (int i = 0; i < listaCultivos->Count; i++) {
		Cultivo^ cultivo = listaCultivos[i];
		lineasArchivo[i] = cultivo->getNombre() + ";" + cultivo->getTipo() + ";" + cultivo->getEtapa() + ";" + cultivo->getRequerimentoTemp() + ";" + cultivo->getRequerimentoHumedad() + ";" + cultivo->getRequerimentoLuz();
	}
	File::WriteAllLines("Cultivos.txt", lineasArchivo);
}

void CultivoController::eliminarCultivo(String^ nombreEliminar) {
	List<Cultivo^>^ listaCultivos = buscarTodos();
	for (int i = 0; i < listaCultivos->Count; i++) {
		Cultivo^ cultivo = listaCultivos[i];
		if (cultivo->getNombre() == nombreEliminar) {
			//Aqui ya elimine al que queria de la lista
			listaCultivos->RemoveAt(i);
			break;
		}
	}
	//Vuelvo a escribir la lista en el archivo, sin considerar al eliminado
	escribirArchivo(listaCultivos);
}