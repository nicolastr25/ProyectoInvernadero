#include "MaquinaTermicaController.h"
using namespace InvernaderoController;
using namespace System::IO;

maquinaTermicaController::maquinaTermicaController() {

}
List<MaquinaTermica^>^ maquinaTermicaController::buscarTodos() {
	List<MaquinaTermica^>^ listaMaquinaTermicas = gcnew List<MaquinaTermica^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("MaquinaTermicas.txt");
	String^ separadores = ";";
	for each(String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ tipoFile = campos[1];
		String^ fabricanteFile = campos[2];
		String^ estadoFile = campos[3];


		MaquinaTermica^ maquinaTermica = gcnew MaquinaTermica(codigoFile, estadoFile, tipoFile, fabricanteFile);
		listaMaquinaTermicas->Add(maquinaTermica);

	}
	return listaMaquinaTermicas;
}
MaquinaTermica^ maquinaTermicaController::buscarmaquinaTermicaxCodigo(int codigo) {
	List<MaquinaTermica^>^ listaMaquinaTermicas = buscarTodos();
	for (int i = 0; i < listaMaquinaTermicas->Count; i++) {
		MaquinaTermica^ MaquinaTermica = listaMaquinaTermicas[i];
		if (MaquinaTermica->getId() == codigo) {
			return MaquinaTermica;
		}
	}
}
List<MaquinaTermica^>^ maquinaTermicaController::buscarmaquinaTermicaxFabricantexTipo(String^ tipo, String^ fabricante) {
	List<MaquinaTermica^>^ listaMaquinaTermicas = gcnew List<MaquinaTermica^>(); //Aqui creo la lista vacía
	array<String^>^ lineas = File::ReadAllLines("MaquinaTermicas.txt");
	String^ separadores = ";";
	for each(String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigoFile = Convert::ToInt32(campos[0]);
		String^ tipoFile = campos[1];
		String^ fabricanteFile = campos[2];
		String^ estadoFile = campos[3];

		if (tipoFile->Contains(tipo) && fabricanteFile->Contains(fabricante)) {
			MaquinaTermica^ maquinaTermica = gcnew MaquinaTermica(codigoFile, estadoFile, tipoFile, fabricanteFile);
			listaMaquinaTermicas->Add(maquinaTermica);
		}
	}
	return listaMaquinaTermicas;
}
void maquinaTermicaController::eliminarmaquinaTermica(int codigoEliminar) {
	List<MaquinaTermica^>^ listaMaquinaTermicas = buscarTodos();
	for (int i = 0; i < listaMaquinaTermicas->Count; i++) {
		MaquinaTermica^ MaquinaTermica = listaMaquinaTermicas[i];
		if (MaquinaTermica->getId() == codigoEliminar) {
			//Aqui ya elimine al que queria de la lista
			listaMaquinaTermicas->RemoveAt(i);
			break;
		}
	}
	//Vuelvo a escribir la lista en el archivo, sin considerar al eliminado
	escribirArchivo(listaMaquinaTermicas);
}
void maquinaTermicaController::agregarmaquinaTermica(int codigo, String^ tipo, String^fabricante, String^estado) {
	List<MaquinaTermica^>^ listaMaquinaTermicas = buscarTodos();
	MaquinaTermica^ MaquinaTermicaNuevo = gcnew MaquinaTermica(codigo,estado,tipo, fabricante);
	listaMaquinaTermicas->Add(MaquinaTermicaNuevo);
	escribirArchivo(listaMaquinaTermicas);
}
void maquinaTermicaController::escribirArchivo(List<MaquinaTermica^>^ listaMaquinaTermicas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaMaquinaTermicas->Count);
	for (int i = 0; i < listaMaquinaTermicas->Count; i++) {
		MaquinaTermica^ MaquinaTermica = listaMaquinaTermicas[i];
		lineasArchivo[i] = MaquinaTermica->getId() + ";" + MaquinaTermica->getTipo() + ";" + MaquinaTermica->getFabricante() + ";" + MaquinaTermica->getEstado();
	}
	File::WriteAllLines("MaquinaTermicas.txt", lineasArchivo);
}
void maquinaTermicaController::actualizarmaquinaTermica(int codigo, String^ tipo, String^ fabricante, String^ estado) {
	List<MaquinaTermica^>^ listaMaquinaTermicas = buscarTodos();
	for (int i = 0; i < listaMaquinaTermicas->Count; i++) {
		MaquinaTermica^ MaquinaTermica = listaMaquinaTermicas[i];
		if (MaquinaTermica->getId() == codigo) {
			MaquinaTermica->setEstado(estado);
			MaquinaTermica->setTipo(tipo);
			MaquinaTermica->setFabricante(fabricante);

			listaMaquinaTermicas[i] = MaquinaTermica;
			break;
		}
	}
	escribirArchivo(listaMaquinaTermicas);
}