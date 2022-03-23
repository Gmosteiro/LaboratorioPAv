#include "DtPartidaIndividual.h"

    DtPartidaIndividual::DtPartidaIndividual(){}
    DtPartidaIndividual::DtPartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior){
        setFecha(fecha);
        setDuracion(duracion);
        this->continuaPartidaAnterior = continuaPartidaAnterior;
    }
    bool DtPartidaIndividual::getcontinuaPartidaAnterior(){
        return this->continuaPartidaAnterior;
    }
    void DtPartidaIndividual::setcontinuaPartidaAnterior(bool continuaPartidaAnterior){
        this->continuaPartidaAnterior = continuaPartidaAnterior;
    }
    DtPartidaIndividual::~DtPartidaIndividual(){}