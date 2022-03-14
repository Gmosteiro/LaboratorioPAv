#include "DtTerrestre.h"

    DtTerrestre::DtTerrestre(){}
    DtTerrestre::DtTerrestre(string nombre, TipoGema gema, int dificultad, string pais){
        this->nombre = nombre;
        this->gema = gema;
        this->dificultad = dificultad;
        this->pais = pais;
    }
    string DtTerrestre::getPais(){
        return this->pais;
    }
    void DtTerrestre::setPais(string pais){
        this->pais = pais;
    }
    DtTerrestre::~DtTerrestre(){}

    ostream& operator <<(ostream& salida,DtTerrestre& dtt){
        cout << dtt.nombre << " | " << dtt.gemas[dtt.gema] << " | " << dtt.dificultad << " | " << dtt.pais << endl;
        return salida;
    }