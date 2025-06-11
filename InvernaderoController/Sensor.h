#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class Sensor {
    private:
        int id;
        String^ tipo;
        String^ unidad;
        float valorActual;

    public:
        Sensor();
        Sensor(int id, String^ tipo, String^ unidad, float valorActual);

        float leer();
        void calibrar();
        String^ getTipo();

        int getId();
        void setId(int id);
        String^ getUnidad();
        void setUnidad(String^ unidad);
        float getValorActual();
        void setValorActual(float valorActual);
    };
}