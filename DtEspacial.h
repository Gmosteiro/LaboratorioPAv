#ifndef DTESPACIAL
#define DTESPACIAL
#include <iostream>
#include "DtLugar.h"
using namespace std;

class DtEspacial:public DtLugar{
    private:
        int cantNav;
    public:
        DtEspacial();
        DtEspacial(string nombre, TipoGema gema, int dificultad, int cantNav);
        int getCantNav();
        void setCantNav(int cantNav);
        ~DtEspacial();

        friend ostream& operator <<(ostream&,DtEspacial&);
};

#endif