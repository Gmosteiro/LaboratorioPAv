#include "DtPartidaMultijugador.h"
    DtPartidaMultijugador::DtPartidaMultijugador(){}
    DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora* fecha, int duracion, bool transmitidaEnVivo, int cantParticipantes){
        setFecha(fecha);
        setDuracion(duracion);
        this->transmitidaEnVivo = transmitidaEnVivo;
        this->cantParticipantes = cantParticipantes;  // ashey
    }
    bool DtPartidaMultijugador::getTransmitidaEnVivo(){
        return this->transmitidaEnVivo;
    }
    void DtPartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo){
        this->transmitidaEnVivo = transmitidaEnVivo;
    }
    int DtPartidaMultijugador::getCantParticipantes(){
        return this->cantParticipantes;
    }
    void DtPartidaMultijugador::setCantParticipantes(int cantParticipantes){
        this->cantParticipantes = cantParticipantes;
    }
    DtPartidaMultijugador::~DtPartidaMultijugador(){}

    ostream& operator <<(ostream& salida,DtPartidaMultijugador& dtpm){

    cout << "Fecha de la partida: " << dtpm.getFecha() << " | Duracion: " << dtpm.getDuracion() << " | Transmitida en vivo: " << dtpm.getTransmitidaEnVivo() << " | Cantidad de jugadores: " << dtpm.getCantParticipantes() << endl;
    return salida;
    
    }