#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace InvernaderoModel {

    public ref class Registro {
    private:
        List<String^>^ acciones;

    public:
        Registro();

        void agregarAccion(String^ descripcion);
        void mostrarHistorial();

        // Getter opcional si se desea acceder al historial desde fuera
        List<String^>^ getAcciones();
    };

}
