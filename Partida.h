#ifndef PARTIDA
#define PARTIDA
#include "DtFechaHora.h"

    class Partida{
        private:
            DtFechaHora* fecha;
            int duracion;
        public:
            Partida();
            Partida(DtFechaHora* fecha, int duracion);
            DtFechaHora* getFecha();
            void setFecha(DtFechaHora* fecha);
            int getDuracion();
            void setDuracion(int duracion);
            ~Partida();

            virtual int darTotalHorasParticipantes()=0;
    };

#endif