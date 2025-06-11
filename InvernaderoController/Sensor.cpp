#include "Sensor.h"

using namespace InvernaderoModel;

Sensor::Sensor() {
    this->id = 0;
    this->tipo = "";
    this->unidad = "";
    this->valorActual = 0.0f;
}

Sensor::Sensor(int id, String^ tipo, String^ unidad, float valorActual) {
    this->id = id;
    this->tipo = tipo;
    this->unidad = unidad;
    this->valorActual = valorActual;
}

float Sensor::leer() {
    return this->valorActual;
}

void Sensor::calibrar() {
    // Aquí podrías poner lógica de calibración, por ahora simplemente reseteamos
    this->valorActual = 0.0f;
}

String^ Sensor::getTipo() {
    return this->tipo;
}

int Sensor::getId() {
    return this->id;
}

void Sensor::setId(int id) {
    this->id = id;
}

String^ Sensor::getUnidad() {
    return this->unidad;
}

void Sensor::setUnidad(String^ unidad) {
    this->unidad = unidad;
}

float Sensor::getValorActual() {
    return this->valorActual;
}

void Sensor::setValorActual(float valorActual) {
    this->valorActual = valorActual;
}