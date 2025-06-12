#pragma once
#include "Zona.h"

using namespace System;

namespace InvernaderoModel {

    public ref class Tarea {
    private:
        int codigo;
        String^ descripcion;
        String^ fechaLimite;
        String^ estado;
        Zona^ zona;

    public:
        Tarea();
        Tarea(int codigo, String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona);

        void marcarComoRealizada();
        void asignarZona(Zona^ z);

        // Getters y setters
        int getCodigo();
        void setCodigo(int codigo);

        String^ getDescripcion();
        void setDescripcion(String^ descripcion);

        String^ getFechaLimite();
        void setFechaLimite(String^ fecha);

        String^ getEstado();
        void setEstado(String^ est);

        Zona^ getZona();
        void setZona(Zona^ z);
    };

}
