#include "Zona.h"

using namespace InvernaderoModel;

Zona::Zona() {
    this->sensores = gcnew List<Sensor^>();
    this->maquinas = gcnew List<MaquinaTermica^>();
}

Zona::Zona(String^ nombre, String^ ubicacion, List<Sensor^>^ sensores, List<MaquinaTermica^>^ maquinas,
    HistorialMediciones^ historial, Usuario^ usuarioAsignado, Cultivo^ cultivo) {
    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->sensores = sensores;
    this->maquinas = maquinas;
    this->historial = historial;
    this->usuarioAsignado = usuarioAsignado;
    this->cultivo = cultivo;
}

String^ Zona::getNombre() {
    return this->nombre;
}

void Zona::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Zona::getUbicacion() {
    return this->ubicacion;
}

void Zona::setUbicacion(String^ ubicacion) {
    this->ubicacion = ubicacion;
}

List<Sensor^>^ Zona::getSensores() {
    return this->sensores;
}

void Zona::setSensores(List<Sensor^>^ sensores) {
    this->sensores = sensores;
}

void Zona::agregarSensor(Sensor^ sensor) {
    this->sensores->Add(sensor);
}

List<MaquinaTermica^>^ Zona::getMaquinas() {
    return this->maquinas;
}

void Zona::setMaquinas(List<MaquinaTermica^>^ maquinas) {
    this->maquinas = maquinas;
}

void Zona::agregarMaquina(MaquinaTermica^ maquina) {
    this->maquinas->Add(maquina);
}

HistorialMediciones^ Zona::getHistorial() {
    return this->historial;
}

void Zona::setHistorial(HistorialMediciones^ historial) {
    this->historial = historial;
}

Usuario^ Zona::getUsuarioAsignado() {
    return this->usuarioAsignado;
}

void Zona::setUsuarioAsignado(Usuario^ usuarioAsignado) {
    this->usuarioAsignado = usuarioAsignado;
}

Cultivo^ Zona::getCultivo() {
    return this->cultivo;
}

void Zona::setCultivo(Cultivo^ cultivo) {
    this->cultivo = cultivo;
}

void Zona::registrarMedicion() {
}

bool Zona::evaluarCondiciones() {
    return true;
}

void Zona::generarTareaSiNecesario() {
}
