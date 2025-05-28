#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class MaquinaTermica {
    private:
        String^ id;
        bool estado;

    public:
        MaquinaTermica();
        MaquinaTermica(String^ id, bool estado);

        void encender();
        void apagar();
        String^ getTipo();

        String^ getId();
        void setId(String^ id);
        bool getEstado();
        void setEstado(bool estado);
    };
}