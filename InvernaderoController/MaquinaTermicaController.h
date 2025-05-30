#pragma once


namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class maquinaTermicaController {

	public:
		maquinaTermicaController();
		List<MaquinaTermica^>^ buscarTodos();
		MaquinaTermica^ buscarmaquinaTermicaxCodigo(int codigo);
		List<MaquinaTermica^>^ buscarmaquinaTermicaxFabricantexTipo(String^ tipo, String^ fabricante);
		void eliminarmaquinaTermica(int codigoEliminar);
		void agregarmaquinaTermica(int codigo, String^ estado, String^ tipo, String^ fabricante);
		void escribirArchivo(List<MaquinaTermica^>^ listamaquinaTermicas);
		void actualizarmaquinaTermica(int codigo, String^ estado, String^ tipo, String^ fabricante);

	};
}
