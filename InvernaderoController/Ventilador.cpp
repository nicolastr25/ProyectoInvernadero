#include "Ventilador.h"

using namespace InvernaderoModel;

/**
 * Implementación de Ventilador
 */

Ventilador::Ventilador() {
    this->velocidad = 0.0f;  // Valor inicial de velocidad
}

void Ventilador::ajustarVelocidad(float v) {
    this->velocidad = v;  // Ajusta la velocidad del ventilador
}

float Ventilador::getVelocidad() {
    return this->velocidad;  // Devuelve la velocidad actual
}

void Ventilador::setVelocidad(float v) {
    this->velocidad = v;  // Establece la velocidad del ventilador
}
