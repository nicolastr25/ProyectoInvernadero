#include "Distrito.h"

namespace InvernaderoModel {

    Distrito::Distrito() {
    }

    Distrito::Distrito(String^ nombre, String^ codigoUbigeo, Provincia^ provincia) {
        this->nombre = nombre;
        this->codigoUbigeo = codigoUbigeo;
        this->provincia = provincia;
    }

    String^ Distrito::getNombre() {
        return nombre;
    }

    void Distrito::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Distrito::getCodigoUbigeo() {
        return codigoUbigeo;
    }

    void Distrito::setCodigoUbigeo(String^ codigoUbigeo) {
        this->codigoUbigeo = codigoUbigeo;
    }

    Provincia^ Distrito::getProvincia() {
        return provincia;
    }

    void Distrito::setProvincia(Provincia^ provincia) {
        this->provincia = provincia;
    }
}
