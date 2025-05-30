#include "Cliente.h"

namespace InvernaderoModel {

    Cliente::Cliente() {
        nombre = "";
        dni = "";
        telefono = "";
        email = "";
        direccion = "";
        distrito = nullptr;
    }

    Cliente::Cliente(int codigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->dni = dni;
        this->telefono = telefono;
        this->email = email;
        this->direccion = direccion;
    }

    int Cliente::getCodigo() {
        return codigo;
    }

    void Cliente::setCodigo(int codigo) {
        this->codigo = codigo;
    }

    String^ Cliente::getNombre() {
        return nombre;
    }

    void Cliente::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Cliente::getDni() {
        return dni;
    }

    void Cliente::setDni(String^ dni) {
        this->dni = dni;
    }

    String^ Cliente::getTelefono() {
        return telefono;
    }

    void Cliente::setTelefono(String^ telefono) {
        this->telefono = telefono;
    }

    String^ Cliente::getEmail() {
        return email;
    }

    void Cliente::setEmail(String^ email) {
        this->email = email;
    }

    String^ Cliente::getDireccion() {
        return direccion;
    }

    void Cliente::setDireccion(String^ direccion) {
        this->direccion = direccion;
    }

    Distrito^ Cliente::getDistrito() {
        return distrito;
    }

    void Cliente::setDistrito(Distrito^ distrito) {
        this->distrito = distrito;
    }
}
