#include "Tarea.h"

using namespace InvernaderoModel;

Tarea::Tarea() {
}

Tarea::Tarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona) {
    this->codigo = codigo;
    this->descripcion = descripcion;
    this->fechaLimite = fechaLimite;
    this->estado = estado;
    this->zona = zona;
}

void Tarea::marcarComoRealizada() {
    this->estado = "Realizada";
}

void Tarea::asignarZona(Zona^ z) {
    this->zona = z;
}

int Tarea::getCodigo() {
    return this->codigo;
}

void Tarea::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ Tarea::getDescripcion() {
    return this->descripcion;
}

void Tarea::setDescripcion(String^ descripcion) {
    this->descripcion = descripcion;
}

String^ Tarea::getFechaLimite() {
    return this->fechaLimite;
}

void Tarea::setFechaLimite(String^ fechaLimite) {
    this->fechaLimite = fechaLimite;
}

String^ Tarea::getEstado() {
    return this->estado;
}

void Tarea::setEstado(String^ estado) {
    this->estado = estado;
}

Zona^ Tarea::getZona() {
    return this->zona;
}

void Tarea::setZona(Zona^ zona) {
    this->zona = zona;
}