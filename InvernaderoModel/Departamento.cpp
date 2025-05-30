#include "Departamento.h"

namespace InvernaderoModel {

    Departamento::Departamento() {
    }

    Departamento::Departamento(int codigo, String^ nombre, String^ region) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->region = region;
    }

    String^ Departamento::getNombre() {
        return this->nombre;
    }

    void Departamento::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    int Departamento::getCodigo() {
        return this->codigo;
    }

    void Departamento::setCodigo(int codigo) {
        this->codigo = codigo;
    }

    String^ Departamento::getRegion() {
        return this->region;
    }

    void Departamento::setRegion(String^ region) {
        this->region = region;
    }
}