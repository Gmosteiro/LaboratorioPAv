#ifndef DTLUGAR
#define DTLUGAR
#include <string>

using namespace std;

enum TipoGema{
    ALMA,
    ESPACIO,
    REALIDAD,
    TIEMPO,
    PODER,
    MENTE,
    NINGUNA
};

class DtLugar { 

    protected:
    string nombre;
    TipoGema gema;
    int dificultad;
    string gemas[7] = {"ALMA", "ESPACIO", "REALIDAD", "TIEMPO", "PODER", "MENTE", "NINGUNA"};
    public:
    DtLugar();
    DtLugar(string nombre, TipoGema gema, int dificultad);
    string getNombre();
    void setNombre(string nombre);
    TipoGema getGema();
    void setGema(TipoGema gema);
    int getDificultad();
    void setDificultad(int dificultad);
    ~DtLugar();

};

#endif