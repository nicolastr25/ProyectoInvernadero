#include "Invernadero.h"

using namespace InvernaderoModel;

Invernadero::Invernadero() {
    this->zonas = gcnew List<Zona^>();
    this->usuarios = gcnew List<Usuario^>();
}

Invernadero::Invernadero(String^ nombre, String^ ubicacion) {
    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->zonas = gcnew List<Zona^>();
    this->usuarios = gcnew List<Usuario^>();
}

void Invernadero::agregarZona(Zona^ zona) {
    this->zonas->Add(zona);
}

void Invernadero::eliminarZona(String^ nombreZona) {
    for (int i = 0; i < this->zonas->Count; i++) {
        if (this->zonas[i]->getNombre() == nombreZona) {
            this->zonas->RemoveAt(i);
            break;
        }
    }
}

Zona^ Invernadero::obtenerZona(String^ nombreZona) {
    for (int i = 0; i < this->zonas->Count; i++) {
        if (this->zonas[i]->getNombre() == nombreZona) {
            return this->zonas[i];
        }
    }
    return nullptr; // Retorna nullptr si no se encuentra la zona
}

void Invernadero::monitorear() {
    // Lógica de monitoreo (ej. revisar condiciones de las zonas)
}

void Invernadero::mostrarResumen() {
    // Lógica para mostrar el resumen del invernadero
}

String^ Invernadero::getNombre() {
    return this->nombre;
}

void Invernadero::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Invernadero::getUbicacion() {
    return this->ubicacion;
}

void Invernadero::setUbicacion(String^ ubicacion) {
    this->ubicacion = ubicacion;
}

List<Zona^>^ Invernadero::getZonas() {
    return this->zonas;
}

void Invernadero::setZonas(List<Zona^>^ zonas) {
    this->zonas = zonas;
}

List<Usuario^>^ Invernadero::getUsuarios() {
    return this->usuarios;
}

void Invernadero::setUsuarios(List<Usuario^>^ usuarios) {
    this->usuarios = usuarios;
}