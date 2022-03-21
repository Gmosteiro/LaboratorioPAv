#ifndef DTJUEGO
#define DTJUEGO
#include <string>
#include "TipoGenero.h"

using namespace std;

class DtJuego{
private:
    string nombre;
    TipoGenero genero;
    int totalHorasDeJuego;
public:
    DtJuego();
    DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego);
    string getNombre();
    void setNombre(string nombre);
    TipoGenero getGenero();
    void setGenero(TipoGenero genero);
    int getTotalHorasDeJuego();
    void setTotalHorasDeJuego(int totalHorasDeJuego);
    ~DtJuego();   
};

#endif