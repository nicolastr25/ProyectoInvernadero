#include "Usuario.h"

using namespace InvernaderoModel;

Usuario::Usuario() {
    this->nombre = nullptr;
    this->user = nullptr;
    this->clave = nullptr;
}

Usuario::Usuario(int codigo, String^ nombre, String^ user, String^ clave) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->user = user;
    this->clave = clave;
}

int Usuario::getCodigo() {
    return this->codigo;
}

void Usuario::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ Usuario::getNombre() {
    return this->nombre;
}

void Usuario::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Usuario::getUser() {
    return this->user;
}

void Usuario::setUser(String^ usuario) {
    this->user = usuario;
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
