#include "MaquinaTermica.h"

using namespace InvernaderoModel;

MaquinaTermica::MaquinaTermica() {
    this->estado = false;
}

MaquinaTermica::MaquinaTermica(String^ id, bool estado) {
    this->id = id;
    this->estado = estado;
}

void MaquinaTermica::encender() {
    this->estado = true;
}

void MaquinaTermica::apagar() {
    this->estado = false;
}

String^ MaquinaTermica::getTipo() {
    return "Genérica"; // Puedes personalizar esto si hay herencia
}

String^ MaquinaTermica::getId() {
    return this->id;
}

void MaquinaTermica::setId(String^ id) {
    this->id = id;
}

bool MaquinaTermica::getEstado() {
    return this->estado;
}

void MaquinaTermica::setEstado(bool estado) {
    this->estado = estado;
}