#pragma once

#include "Sensor.h"

using namespace System;

namespace InvernaderoModel {

    public ref class SensorLuz : public Sensor {
    public:
        SensorLuz();

        virtual float leerValor() override;
    };

}
