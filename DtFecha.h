#ifndef FECHA
#define FECHA
#include <iostream>

using namespace std;

class Fecha{

    private :
    int dia;
    int mes;
    int anio;
    public :
    Fecha();
    Fecha(int dia, int mes, int anio);
    void setDia(int dia);
    int getDia();
    void setMes(int mes);
    int getMes();
    void setAnio(int anio);
    int getAnio();
    ~Fecha();
    
    friend ostream& operator << (ostream&, Fecha&);
    friend bool operator ==(const Fecha&, const Fecha&);
    friend bool operator < (const Fecha&, const Fecha&);
};

#endif

