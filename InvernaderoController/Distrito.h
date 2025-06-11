#pragma once

#include "Provincia.h"

namespace InvernaderoModel {

    using namespace System;

    public ref class Distrito {
    private:
        String^ nombre;
        String^ codigoUbigeo;
        Provincia^ provincia;
    public:
        Distrito();
        Distrito(String^ nombre, String^ codigoUbigeo, Provincia^ provincia);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getCodigoUbigeo();
        void setCodigoUbigeo(String^ codigoUbigeo);

        Provincia^ getProvincia();
        void setProvincia(Provincia^ provincia);
    };
}