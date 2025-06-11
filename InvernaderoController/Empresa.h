#pragma once

using namespace System;

namespace InvernaderoModel {

    public ref class Empresa {
    private:
        int codigo;
        String^ nombre;
        String^ ruc;
        String^ direccionFiscal;
        String^ telefono;
        String^ email;

    public:
        Empresa();
        Empresa(int codigo, String^ nombre, String^ ruc, String^ direccionFiscal, String^ telefono, String^ email);


        int getCodigo();
        void setCodigo(int codigo);

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