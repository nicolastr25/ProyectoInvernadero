#pragma once

namespace InvernaderoModel {

    using namespace System;

    public ref class Cultivo {
    private:
        String^ nombre;
        String^ tipo;
        String^ etapa;
        float requerimientoTemp;
        float requerimientoHumedad;
        float requerimientoLuz;
    public:
        Cultivo();
        Cultivo(String^ nombre, String^ tipo, String^ etapa, float requerimientoTemp, float requerimientoHumedad, float requerimientoLuz);
       
        
        String^ getNombre();
        void setNombre(String^ Nombre);
        String^ getTipo();
        void setTipo(String^ tipo);
        String^ getEtapa();
        void setEtapa(String^ etapa);
        float getRequerimentoTemp();
        void setRequerimentoTemp(float requerimentoTemp);
        float getRequerimentoHumedad();
        void setRequerimentoHumedad(float requerimientoHumedad);
        float getRequerimentoLuz();
        void setRequerimentoLuz(float requerimentoLuz);
    };
}