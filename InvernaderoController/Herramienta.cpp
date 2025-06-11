#include "Herramienta.h"

using namespace InvernaderoModel;

Herramienta::Herramienta() {
    this->nombre = "";
    this->tipo = "";
    this->estado = "Disponible";
}

Herramienta::Herramienta(String^ nombre, String^ tipo, String^ estado) {
    this->nombre = nombre;
    this->tipo = tipo;
    this->estado = estado;
}

void Herramienta::usar() {
    this->estado = "En uso";
}

void Herramienta::revisarEstado() {
    // Podrías agregar lógica aquí para mostrar o verificar el estado actual
}

void Herramienta::reparar() {
    this->estado = "Reparada";
}

String^ Herramienta::getNombre() {
    return this->nombre;
}

void Herramienta::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Herramienta::getTipo() {
    return this->tipo;
}

void Herramienta::setTipo(String^ tipo) {
    this->tipo = tipo;
}

String^ Herramienta::getEstado() {
    return this->estado;
}

void Herramienta::setEstado(String^ estado) {
    this->estado = estado;
}