#pragma once

#include "Sensor.h"

using namespace System;

namespace InvernaderoModel {

    public ref class SensorHumedad : public Sensor {
    public:
        SensorHumedad();

        virtual float leerValor() override;
    };

}
