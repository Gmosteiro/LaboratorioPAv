#include "Partida.h"

    Partida::Partida(){}
    Partida::Partida(DtFechaHora* fecha, int duracion, DtJugador* host){
        this->fecha = fecha;
        this->duracion = duracion;
        this->host = host;
    }
    DtFechaHora* Partida::getFecha(){
        return this->fecha;
    }
    void Partida::setFecha(DtFechaHora* fecha){
        this->fecha = fecha;
    }
    int Partida::getDuracion(){
        return this->duracion;
    }
    void Partida::setDuracion(int duracion){
        this->duracion = duracion;
    }
    DtJugador* Partida::getHost(){
        return this->host;
    }
    void Partida::setHost(DtJugador* host){
        this->host = host;
    }

    Partida::~Partida(){}