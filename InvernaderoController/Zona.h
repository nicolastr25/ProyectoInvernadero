#pragma once

namespace InvernaderoModel {

    using namespace System;
    using namespace System::Collections::Generic;

    ref class Sensor;
    ref class MaquinaTermica;
    ref class HistorialMediciones;
    ref class Usuario;
    ref class Cultivo;

    public ref class Zona {
    private:
        String^ nombre;
        String^ ubicacion;
        List<Sensor^>^ sensores;
        List<MaquinaTermica^>^ maquinas;
        HistorialMediciones^ historial;
        Usuario^ usuarioAsignado;
        Cultivo^ cultivo;

    public:
        Zona();
        Zona(String^ nombre, String^ ubicacion, List<Sensor^>^ sensores, List<MaquinaTermica^>^ maquinas,
            HistorialMediciones^ historial, Usuario^ usuarioAsignado, Cultivo^ cultivo);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);

        List<Sensor^>^ getSensores();
        void setSensores(List<Sensor^>^ sensores);
        void agregarSensor(Sensor^ sensor);

        List<MaquinaTermica^>^ getMaquinas();
        void setMaquinas(List<MaquinaTermica^>^ maquinas);
        void agregarMaquina(MaquinaTermica^ maquina);

        HistorialMediciones^ getHistorial();
        void setHistorial(HistorialMediciones^ historial);

        Usuario^ getUsuarioAsignado();
        void setUsuarioAsignado(Usuario^ usuario);

        Cultivo^ getCultivo();
        void setCultivo(Cultivo^ cultivo);

        void registrarMedicion();
        bool evaluarCondiciones();
        void generarTareaSiNecesario();
    };
}