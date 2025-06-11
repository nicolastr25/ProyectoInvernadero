#pragma once

#include "Departamento.h"

namespace InvernaderoModel {

    using namespace System;

    public ref class Provincia {
    private:
        String^ nombre;
        String^ codigoUbigeo;
        Departamento^ departamento;
    public:
        Provincia();
        Provincia(String^ nombre, String^ codigoUbigeo, Departamento^ departamento);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getCodigoUbigeo();
        void setCodigoUbigeo(String^ codigoUbigeo);

        Departamento^ getDepartamento();
        void setDepartamento(Departamento^ departamento);
    };
}