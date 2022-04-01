#ifndef SISTEMA
#define SISTEMA
#include "DtJugador.h"
#include "DtJuego.h"
#include "DtPartida.h"
#include "DtPartidaIndividual.h"
#include "DtPartidaMultijugador.h"
#include "DtFechaHora.h"
#include "Jugador.h"
#include "Juego.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"

#define MAX_JUGADORES 100
#define MAX_JUEGOS 100

class Sistema{

    public:
    struct Jugadores;
    struct Juegos;

    void agregarJugador(string nickname, int edad, string password);
    DtJugador** obtenerJugadores(int& cantJugadores);
    void imprimirJugadores(DtJugador** dtjs, int cant);
    void agregarVideojuego(string nombre, TipoGenero genero);
    DtJuego** obtenerVideojuegos(int& cantVideojuegos);
    void iniciarPartida(string nickname, string videojuego, DtPartida* datos);
    DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);
    void imprimirPartidas(DtPartida** dtps, int cant);
    void imprimirVideojuegos(DtJuego** dtgs, int cant);
    void menu();
    void menuAgregarJugador();
    void menuAgregarVideoJuego();
    void menuIniciarPartida();
};
#endif