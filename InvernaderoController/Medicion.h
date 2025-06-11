#pragma once

using namespace System;

namespace InvernaderoModel {

    public ref class Medicion {
    private:
        String^ fechaHora;
        String^ tipo;
        float valor;

    public:
        Medicion();
        Medicion(String^ fechaHora, String^ tipo, float valor);

        void mostrar();

        // Getters y setters
        String^ getFechaHora();
        void setFechaHora(String^ fechaHora);

        String^ getTipo();
        void setTipo(String^ tipo);

        float getValor();
        void setValor(float valor);
    };
}