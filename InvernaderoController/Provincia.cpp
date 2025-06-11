#include "Provincia.h"

namespace InvernaderoModel {

    Provincia::Provincia() {
    }

    Provincia::Provincia(String^ nombre, String^ codigoUbigeo, Departamento^ departamento) {
        this->nombre = nombre;
        this->codigoUbigeo = codigoUbigeo;
        this->departamento = departamento;
    }

    String^ Provincia::getNombre() {
        return nombre;
    }

    void Provincia::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Provincia::getCodigoUbigeo() {
        return codigoUbigeo;
    }

    void Provincia::setCodigoUbigeo(String^ codigoUbigeo) {
        this->codigoUbigeo = codigoUbigeo;
    }

    Departamento^ Provincia::getDepartamento() {
        return departamento;
    }

    void Provincia::setDepartamento(Departamento^ departamento) {
        this->departamento = departamento;
    }
}
