#ifndef DTFECHAHORA
#define DTFECHAHORA
#include <iostream>

using namespace std;

class DtFechaHora{
    private:
        int dia, mes, anio, hora, minuto;
    public:
        DtFechaHora();
        DtFechaHora(int dia, int mes, int anio, int hora, int minuto);
        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAnio();
        void setAnio(int anio);
        int getHora();
        void setHora(int hora);
        int getMinuto();
        void setMinuto(int minuto);
        ~DtFechaHora();

        friend ostream& operator <<(ostream&,DtFechaHora&);
};
#endif