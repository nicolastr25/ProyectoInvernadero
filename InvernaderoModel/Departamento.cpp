#include "Departamento.h"

namespace InvernaderoModel {

    Departamento::Departamento() {
    }

    Departamento::Departamento(String^ nombre, String^ codigo, String^ region) {
        this->nombre = nombre;
        this->codigo = codigo;
        this->region = region;
    }

    String^ Departamento::getNombre() {
        return nombre;
    }

    void Departamento::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Departamento::getCodigo() {
        return codigo;
    }

    void Departamento::setCodigo(String^ codigo) {
        this->codigo = codigo;
    }

    String^ Departamento::getRegion() {
        return region;
    }

    void Departamento::setRegion(String^ region) {
        this->region = region;
    }
}
