#pragma once
#include "Zona.h"

namespace InvernaderoModel {

    using namespace System;
    using namespace System::Collections::Generic;

    public ref class Invernadero {
    private:
        String^ nombre;
        String^ ubicacion;
        List<Zona^>^ zonas;
        List<Usuario^>^ usuarios;

    public:
        Invernadero();
        Invernadero(String^ nombre, String^ ubicacion);

        void agregarZona(Zona^ zona);
        void eliminarZona(String^ nombreZona);
        Zona^ obtenerZona(String^ nombreZona);
        void monitorear();
        void mostrarResumen();

        String^ getNombre();
        void setNombre(String^ nombre);
        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);
        List<Zona^>^ getZonas();
        void setZonas(List<Zona^>^ zonas);
        List<Usuario^>^ getUsuarios();
        void setUsuarios(List<Usuario^>^ usuarios);
    };
}