#include "DtLugar.h"

    DtLugar::DtLugar(){}
    DtLugar::DtLugar(string nombre, TipoGema gema, int dificultad){
        this->nombre = nombre;
        this->gema = gema;
        this->dificultad = dificultad;
    }
    string DtLugar::getNombre(){
        return this->nombre;
    }
    void DtLugar::setNombre(string nombre){
        this->nombre = nombre;
    }
    TipoGema DtLugar::getGema(){
        return this->gema;
    }
    void DtLugar::setGema(TipoGema gema){
        this->gema = gema;
    }
    int DtLugar::getDificultad(){
        return this->dificultad;
    }
    void DtLugar::setDificultad(int dificultad){
        this->dificultad = dificultad;
    }
    DtLugar::~DtLugar(){}