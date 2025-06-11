#pragma once

#include "MaquinaTermica.h"

using namespace System;

namespace InvernaderoModel {

    public ref class Ventilador : public MaquinaTermica {
    private:
        float velocidad;

    public:
        Ventilador();

        void ajustarVelocidad(float v);

        // Getters y setters si se necesita acceder externamente
        float getVelocidad();
        void setVelocidad(float v);
    };

}
