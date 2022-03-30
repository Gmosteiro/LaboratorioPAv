#include "PartidaMultijugador.h"
    PartidaMultijugador::PartidaMultijugador(){}
    PartidaMultijugador::PartidaMultijugador(DtFechaHora* fecha, int duracion, DtJugador* host, bool transmitidaEnVivo, int cantParticipantes){
        setFecha(fecha);
        setDuracion(duracion);
        setHost(host);
        this->transmitidaEnVivo = transmitidaEnVivo;
        this->cantParticipantes = cantParticipantes;  // ashey
    }
    bool PartidaMultijugador::getTransmitidaEnVivo(){
        return this->transmitidaEnVivo;
    }
    void PartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo){
        this->transmitidaEnVivo = transmitidaEnVivo;
    }
    int PartidaMultijugador::getCantParticipantes(){
        return this->cantParticipantes;
    }
    void PartidaMultijugador::setCantParticipantes(int cantParticipantes){
        this->cantParticipantes = cantParticipantes;
    }
    int PartidaMultijugador::darTotalHorasParticipantes(){
        return 0;
    }
    PartidaMultijugador::~PartidaMultijugador(){}