#ifndef PARTIDA
#define PARTIDA
#include "DtFechaHora.h"
#include "Jugador.h"

    class Partida{
        private:
            DtFechaHora* fecha;
            int duracion;
            DtJugador* host;
        public:
            Partida();
            Partida(DtFechaHora* fecha, int duracion, DtJugador* host);
            DtFechaHora* getFecha();
            void setFecha(DtFechaHora* fecha);
            int getDuracion();
            void setDuracion(int duracion);
            DtJugador* getHost();
            void setHost(DtJugador* host);
            
            ~Partida();

            virtual int darTotalHorasParticipantes()=0;
    };

#endif