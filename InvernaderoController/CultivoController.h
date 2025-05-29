#pragma once

namespace InvernaderoController {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace InvernaderoModel;

	public ref class CultivoController {

	public:
		CultivoController();
		List<Cultivo^>^ buscarTodos();
		Cultivo^ buscarCultivoxNombre(String^ nombre);
		List<Cultivo^>^ buscarCultivoxNombre_(String^ nombre);
		void eliminarCultivo(String^ nombreEliminar);
		void agregarCultivo(String^ nombre, String^ tipo, String^ etapa, float requerimientoTemp, float requerimientoHumedad, float requerimientoLuz);
		void escribirArchivo(List<Cultivo^>^ listaCultivos);

	};
}
