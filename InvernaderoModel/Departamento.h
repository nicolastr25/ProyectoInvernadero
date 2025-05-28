#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class Departamento {
    private:
        String^ nombre;
        String^ codigo;
        String^ region;
    public:
        Departamento();
        Departamento(String^ nombre, String^ codigo, String^ region);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getCodigo();
        void setCodigo(String^ codigo);

        String^ getRegion();
        void setRegion(String^ region);
    };
}