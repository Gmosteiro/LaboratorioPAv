#ifndef DTPARTIDAINDIVIDUAL
#define DTPARTIDAINDIVIDUAL
#include "DtPartida.h"
#include <iostream>

using namespace std;

class DtPartidaIndividual : public DtPartida{

    private:
        bool continuaPartidaAnterior;
    public:
        DtPartidaIndividual();
        DtPartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior);
        bool getcontinuaPartidaAnterior();
        void setcontinuaPartidaAnterior(bool continuaPartidaAnterior);
        ~DtPartidaIndividual();

        friend ostream& operator <<(ostream&,DtPartidaIndividual&);

};

#endif