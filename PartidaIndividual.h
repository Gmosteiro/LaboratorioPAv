#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"
#include "DtPartida.h"
#include "DtPartidaIndividual.h"

class PartidaIndividual : public Partida{

    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora* fecha, int duracion, DtJugador* host, bool continuaPartidaAnterior);
        bool getcontinuaPartidaAnterior();
        void setcontinuaPartidaAnterior(bool continuaPartidaAnterior);
        int darTotalHorasParticipantes();
        ~PartidaIndividual();
        DtPartida* getDtPartida();
};

#endif