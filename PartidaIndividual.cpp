#include "PartidaIndividual.h"

    PartidaIndividual::PartidaIndividual(){}
    PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, DtJugador* host, bool continuaPartidaAnterior){
        setFecha(fecha);
        setDuracion(duracion);
        setHost(host);
        this->continuaPartidaAnterior = continuaPartidaAnterior;
    }
    bool PartidaIndividual::getcontinuaPartidaAnterior(){
        return this->continuaPartidaAnterior;
    }
    void PartidaIndividual::setcontinuaPartidaAnterior(bool continuaPartidaAnterior){
        this->continuaPartidaAnterior = continuaPartidaAnterior;
    }
    int PartidaIndividual::darTotalHorasParticipantes(){
        return 0;
    }
    PartidaIndividual::~PartidaIndividual(){
    }
    DtPartida* PartidaIndividual::getDtPartida(){
        DtPartida* dtpi = new DtPartidaIndividual(this->getFecha(), this->getDuracion(), this->continuaPartidaAnterior);
        return dtpi;
    }