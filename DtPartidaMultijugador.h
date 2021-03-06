#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include "DtPartida.h"
#include <iostream>

using namespace std;

class DtPartidaMultijugador : public DtPartida{

    private:
        bool transmitidaEnVivo;
        int cantParticipantes;
    public:
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora* fecha, int duracion, bool transmitidaEnVivo, int cantParticipantes);
        bool getTransmitidaEnVivo();
        void setTransmitidaEnVivo(bool transmitidaEnVivo);
        int getCantParticipantes();
        void setCantParticipantes(int cantParticipantes);
        ~DtPartidaMultijugador();

        friend ostream& operator <<(ostream&,DtPartidaMultijugador&);

};

#endif