#include "Termostato.h"

using namespace InvernaderoModel;

Termostato::Termostato() {
    this->temperaturaDeseada = 0.0f;
}

void Termostato::ajustarTemperatura(float t) {
    this->temperaturaDeseada = t;
}

float Termostato::leerTemperatura() {
    return this->temperaturaDeseada;
}

float Termostato::getTemperaturaDeseada() {
    return this->temperaturaDeseada;
}

void Termostato::setTemperaturaDeseada(float t) {
    this->temperaturaDeseada = t;
}
