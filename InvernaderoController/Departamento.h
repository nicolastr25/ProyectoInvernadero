#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class Departamento {
    private:
        int codigo;
        String^ nombre;
        String^ region;
    public:
        Departamento();
        Departamento(int codigo, String^ nombre, String^ region);

        String^ getNombre();
        void setNombre(String^ nombre);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getRegion();
        void setRegion(String^ region);
    };
}