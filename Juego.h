#ifndef JUEGO
#define JUEGO
#include <string>
#include "TipoGenero.h"

using namespace std;

class Juego{
private:
    string nombre;
    TipoGenero genero;
public:
    Juego();
    Juego(string nombre, TipoGenero genero);
    string getNombre();
    void setNombre(string nombre);
    TipoGenero getGenero();
    void setGenero(TipoGenero genero);
    ~Juego();   
};

#endif