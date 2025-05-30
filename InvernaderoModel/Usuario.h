#pragma once

using namespace System;

namespace InvernaderoModel {

    public ref class Usuario {
    private:
        int codigo;
        String^ nombre;
        String^ user;
        String^ clave;

    public:
        Usuario();
        Usuario(int codigo, String^ nombre, String^ user, String^ clave);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getUser();
        void setUser(String^ usuario);

        String^ getClave();
        void setClave(String^ clave);

        String^ getRol();
        bool autenticar(String^ clave);
    };

}
