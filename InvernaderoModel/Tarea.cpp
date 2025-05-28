#include "Tarea.h"
#include "Zona.h"

using namespace InvernaderoModel;

Tarea::Tarea() {
}

Tarea::Tarea(String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona) {
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