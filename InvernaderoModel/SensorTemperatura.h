#pragma once

#include "Sensor.h"

using namespace System;

namespace InvernaderoModel {

    public ref class SensorTemperatura : public Sensor {
    public:
        SensorTemperatura();

        virtual float leerValor() override;
    };

}
