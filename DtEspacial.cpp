#include "DtEspacial.h"

    DtEspacial::DtEspacial(){}
    DtEspacial::DtEspacial(string nombre, TipoGema gema, int dificultad, int cantNav){
        this->nombre = nombre;
        this->gema = gema;
        this->dificultad = dificultad;
        this->cantNav = cantNav;
    }
    int DtEspacial::getCantNav(){
        return this->cantNav;
    }
    void DtEspacial::setCantNav(int cantNav){
        this->cantNav = cantNav;
    }
    DtEspacial::~DtEspacial(){}

    ostream& operator <<(ostream& salida,DtEspacial& dte){
        cout << dte.nombre << " | " << dte.gemas[dte.gema] << " | " << dte.dificultad << " | " << dte.cantNav << endl;
        return salida;
    }