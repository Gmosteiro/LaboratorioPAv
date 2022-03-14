#ifndef DTTERRESTRE
#define DTTERRESTRE
#include <iostream>
#include "DtLugar.h"
using namespace std;

class DtTerrestre:public DtLugar{
    private:
        string pais;
    public:
        DtTerrestre();
        DtTerrestre(string nombre, TipoGema gema, int dificultad, string pais);
        string getPais();
        void setPais(string pais);
        ~DtTerrestre();

        friend ostream& operator <<(ostream&,DtTerrestre&);
};

#endif