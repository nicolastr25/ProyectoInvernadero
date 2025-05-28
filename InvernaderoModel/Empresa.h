#pragma once

using namespace System;

namespace InvernaderoModel {

    public ref class Empresa {
    private:
        String^ nombre;
        String^ ruc;
        String^ direccionFiscal;
        String^ telefono;
        String^ email;

    public:
        Empresa();
        Empresa(String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getRuc();
        void setRuc(String^ ruc);

        String^ getDireccionFiscal();
        void setDireccionFiscal(String^ direccionFiscal);

        String^ getTelefono();
        void setTelefono(String^ telefono);

        String^ getEmail();
        void setEmail(String^ email);
    };
}