#include "PartidaIndividual.h"

    PartidaIndividual::PartidaIndividual(){}
    PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior){
        setFecha(fecha);
        setDuracion(duracion);
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
    PartidaIndividual::~PartidaIndividual(){}