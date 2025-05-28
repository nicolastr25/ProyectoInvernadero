#include "Usuario.h"

using namespace InvernaderoModel;

Usuario::Usuario() {
    this->nombre = nullptr;
    this->usuario = nullptr;
    this->clave = nullptr;
}

String^ Usuario::getNombre() {
    return this->nombre;
}

void Usuario::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Usuario::getUsuario() {
    return this->usuario;
}

void Usuario::setUsuario(String^ usuario) {
    this->usuario = usuario;
}

String^ Usuario::getClave() {
    return this->clave;
}

void Usuario::setClave(String^ clave) {
    this->clave = clave;
}

String^ Usuario::getRol() {
    // Aquí puedes retornar el rol del usuario, por ejemplo:
    return "Administrador";  // Este es solo un valor de ejemplo
}

bool Usuario::autenticar(String^ clave) {
    // Compara la clave proporcionada con la almacenada
    return this->clave == clave;
}
