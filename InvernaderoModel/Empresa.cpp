#include "Empresa.h"

namespace InvernaderoModel {

    Empresa::Empresa() {}

    Empresa::Empresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->ruc = ruc;
        this->direccionFiscal = direccionFiscal;
        this->telefono = telefono;
        this->email = email;
    }

    int Empresa::getCodigo() {
        return codigo;
    }

    void Empresa::setCodigo(int codigo) {
        this->codigo = codigo;
    }


    String^ Empresa::getNombre() {
        return nombre;
    }

    void Empresa::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Empresa::getRuc() {
        return ruc;
    }

    void Empresa::setRuc(String^ ruc) {
        this->ruc = ruc;
    }

    String^ Empresa::getDireccionFiscal() {
        return direccionFiscal;
    }

    void Empresa::setDireccionFiscal(String^ direccionFiscal) {
        this->direccionFiscal = direccionFiscal;
    }

    String^ Empresa::getTelefono() {
        return telefono;
    }

    void Empresa::setTelefono(String^ telefono) {
        this->telefono = telefono;
    }

    String^ Empresa::getEmail() {
        return email;
    }

    void Empresa::setEmail(String^ email) {
        this->email = email;
    }

}
