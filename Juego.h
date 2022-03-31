#ifndef JUEGO
#define JUEGO
#include <string>
#include "TipoGenero.h"
#include "DtJuego.h"
#include "Partida.h"
#define MAX_PARTIDAS 100

using namespace std;

class Juego{
private:
    string nombre;
    TipoGenero genero;
    Partida* partidas[MAX_PARTIDAS];
    int tope;    
public:
    Juego();
    Juego(string nombre, TipoGenero genero);
    string getNombre();
    void setNombre(string nombre);
    TipoGenero getGenero();
    void setGenero(TipoGenero genero);
    Partida** getPartidas(int &cantP);
    void setPartidas(Partida* p);
    int getTope();
    void setTope(int tope);
    DtJuego* getDtJuego();
    ~Juego();   
};
#endif