#pragma once

#include "MaquinaTermica.h"

using namespace System;

namespace InvernaderoModel {

    public ref class Termostato : public MaquinaTermica {
    private:
        float temperaturaDeseada;

    public:
        Termostato();

        void ajustarTemperatura(float t);
        float leerTemperatura();

        // Getters y setters si se desea acceso externo
        float getTemperaturaDeseada();
        void setTemperaturaDeseada(float t);
    };

}
