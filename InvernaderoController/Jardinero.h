#pragma once

#include "Usuario.h"
#include "Herramienta.h"
#include "Tarea.h"
#include "Zona.h"

using namespace System;
using namespace System::Collections::Generic;

namespace InvernaderoModel {

    public ref class Jardinero : public Usuario {
    private:
        List<Herramienta^>^ herramientas;
        List<Tarea^>^ tareas;

    public:
        Jardinero();

        void consultarZona(Zona^ zona);
        void realizarTarea(Tarea^ tarea);
        void agregarHerramienta(Herramienta^ herramienta);

        List<Herramienta^>^ getHerramientas();
        void setHerramientas(List<Herramienta^>^ herramientas);

        List<Tarea^>^ getTareas();
        void setTareas(List<Tarea^>^ tareas);
    };
}