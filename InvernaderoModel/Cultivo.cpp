#include "Cultivo.h"

using namespace InvernaderoModel;

Cultivo::Cultivo() {

}

Cultivo::Cultivo(String^ nombre, String^ tipo, String^ etapa, float requerimientoTemp, float requerimientoHumedad, float requerimientoLuz) {
    this->nombre = nombre;
    this->tipo = tipo;
    this->etapa = etapa;
    this->requerimientoTemp = requerimientoTemp;
    this->requerimientoHumedad = requerimientoHumedad;
    this->requerimientoLuz = requerimientoLuz;
}

String^ Cultivo::getNombre() {
    return this->nombre;
}

void Cultivo::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Cultivo::getTipo() {
    return this->tipo;
}

void Cultivo::setTipo(String^ tipo) {
    this->tipo = tipo;
}

String^ Cultivo::getEtapa() {
    return this->etapa;
}

void Cultivo::setEtapa(String^ etapa) {
    this->etapa = etapa;
}

float Cultivo::getRequerimentoTemp() {
    return this->requerimientoTemp;
}

void Cultivo::setRequerimentoTemp(int requerimientoTemp) {
    this->requerimientoTemp = requerimientoTemp;
}

float Cultivo::getRequerimentoHumedad() {
    return this->requerimientoHumedad;
}

void Cultivo::setRequerimentoHumedad(int requerimientoHumedad) {
    this->requerimientoHumedad = requerimientoHumedad;
}

float Cultivo::getRequerimentoLuz() {
    return this->requerimientoLuz;
}

void Cultivo::setRequerimentoLuz(int requerimientoLuz) {
    this->requerimientoLuz = requerimientoLuz;
}