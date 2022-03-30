#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"

class PartidaMultijugador : public Partida{

    private:
        bool transmitidaEnVivo;
        int cantParticipantes;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora* fecha, int duracion, DtJugador* host, bool transmitidaEnVivo, int cantParticipantes);
        bool getTransmitidaEnVivo();
        void setTransmitidaEnVivo(bool transmitidaEnVivo);
        int getCantParticipantes();
        void setCantParticipantes(int cantParticipantes);
        int darTotalHorasParticipantes();
        ~PartidaMultijugador();

};

#endif