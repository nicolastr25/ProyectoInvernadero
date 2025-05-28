#pragma once

using namespace System;

namespace InvernaderoModel {

    public ref class Usuario {
    private:
        String^ nombre;
        String^ usuario;
        String^ clave;

    public:
        Usuario();

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getUsuario();
        void setUsuario(String^ usuario);

        String^ getClave();
        void setClave(String^ clave);

        String^ getRol();
        bool autenticar(String^ clave);
    };

}
