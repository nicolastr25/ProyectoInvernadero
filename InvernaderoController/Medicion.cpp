#include "Medicion.h"

using namespace InvernaderoModel;

Medicion::Medicion() {
    // Constructor por defecto
}

Medicion::Medicion(String^ fechaHora, String^ tipo, float valor) {
    this->fechaHora = fechaHora;
    this->tipo = tipo;
    this->valor = valor;
}

void Medicion::mostrar() {
    Console::WriteLine("Fecha y Hora: " + this->fechaHora);
    Console::WriteLine("Tipo de Medición: " + this->tipo);
    Console::WriteLine("Valor: " + this->valor);
}

String^ Medicion::getFechaHora() {
    return this->fechaHora;
}

void Medicion::setFechaHora(String^ fechaHora) {
    this->fechaHora = fechaHora;
}

String^ Medicion::getTipo() {
    return this->tipo;
}

void Medicion::setTipo(String^ tipo) {
    this->tipo = tipo;
}

float Medicion::getValor() {
    return this->valor;
}

void Medicion::setValor(float valor) {
    this->valor = valor;
}