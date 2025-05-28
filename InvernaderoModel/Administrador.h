#pragma once

#include "Usuario.h"
#include "Zona.h"
#include "Tarea.h"
/*#include "ConfiguracionSistema.h"*/

namespace InvernaderoModel {

    using namespace System;

    public ref class Administrador : public Usuario {
    public:
        Administrador();

        void agregarZona(Zona^ zona);
        void asignarTarea(Tarea^ tarea);
        /*void modificarConfiguracion(ConfiguracionSistema^ configuracion);*/
        void generarReporte();
    };
}