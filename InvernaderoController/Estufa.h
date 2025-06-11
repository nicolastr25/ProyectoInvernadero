#pragma once

#include "MaquinaTermica.h"

namespace InvernaderoModel {

    using namespace System;

    public ref class Estufa : public MaquinaTermica {
    private:
        float potencia;
    public:
        Estufa();
        Estufa(float potencia);

        void ajustarPotencia(float p);
        float getPotencia();
        void setPotencia(float p);
    };
}