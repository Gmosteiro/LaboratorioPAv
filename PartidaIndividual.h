#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"

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

};

#endif