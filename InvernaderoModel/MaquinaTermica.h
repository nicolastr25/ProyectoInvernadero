#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class MaquinaTermica {
    private:
        int id;
        String^ estado;
        String^ tipo;
        String^ fabricante;

    public:
        MaquinaTermica();
        MaquinaTermica(int id, String^ estado, String^ tipo, String^ Fabricante);

        //void encender();
        //void apagar();
        String^ getTipo();
        void setTipo(String^ tipo);
        String^ getFabricante();
        void setFabricante(String^ fabricante);

        int getId();
        void setId(int id);
        String^ getEstado();
        void setEstado(String^ estado);

    };
}