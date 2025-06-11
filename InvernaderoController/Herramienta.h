#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class Herramienta {
    private:
        String^ nombre;
        String^ tipo;
        String^ estado;
    public:
        Herramienta();
        Herramienta(String^ nombre, String^ tipo, String^ estado);

        void usar();
        void revisarEstado();
        void reparar();

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getTipo();
        void setTipo(String^ tipo);

        String^ getEstado();
        void setEstado(String^ estado);
    };
}