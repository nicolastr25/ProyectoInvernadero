#include "Estufa.h"

using namespace InvernaderoModel;

Estufa::Estufa() {
    this->potencia = 0.0f;
}

Estufa::Estufa(float potencia) {
    this->potencia = potencia;
}

void Estufa::ajustarPotencia(float p) {
    this->potencia = p;
}

float Estufa::getPotencia() {
    return this->potencia;
}

void Estufa::setPotencia(float p) {
    this->potencia = p;
}
