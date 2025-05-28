#pragma once

using namespace System;

namespace InvernaderoModel {

    ref class Zona; // Adelanto de la declaración para evitar error de dependencia circular

    public ref class Tarea {
    private:
        String^ descripcion;
        String^ fechaLimite;
        String^ estado;
        Zona^ zona;

    public:
        Tarea();
        Tarea(String^ descripcion, String^ fechaLimite, String^ estado, Zona^ zona);

        void marcarComoRealizada();
        void asignarZona(Zona^ z);

        // Getters y setters
        String^ getDescripcion();
        void setDescripcion(String^ desc);

        String^ getFechaLimite();
        void setFechaLimite(String^ fecha);

        String^ getEstado();
        void setEstado(String^ est);

        Zona^ getZona();
        void setZona(Zona^ z);
    };

}
