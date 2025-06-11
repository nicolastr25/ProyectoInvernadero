#pragma once

#include "Distrito.h"

namespace InvernaderoModel {

    using namespace System;

    public ref class Cliente {
    private:
        int codigo;
        String^ nombre;
        String^ dni;
        String^ telefono;
        String^ email;
        String^ direccion;
        Distrito^ distrito;

    public:
        Cliente();
        Cliente(int condigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion, Distrito^ distrito);

        // Getters y Setters
        int getCodigo();
        void setCodigo(int codigo);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getDni();
        void setDni(String^ dni);

        String^ getTelefono();
        void setTelefono(String^ telefono);

        String^ getEmail();
        void setEmail(String^ email);

        String^ getDireccion();
        void setDireccion(String^ direccion);

        Distrito^ getDistrito();
        void setDistrito(Distrito^ distrito);
    };
}