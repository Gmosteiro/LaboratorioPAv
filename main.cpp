#include "DtJugador.h"
#include "Jugador.h"
#include "Juego.h"
#include "DtJuego.h"
#include <iostream>
#define MAX_JUGADORES 100
#define MAX_JUEGOS 100

using namespace std;

//COLECCIONES GLOBALES
struct Jugadores {
    Jugador* j[MAX_JUGADORES];
    int tope=0;
} colJugadores;
struct Juegos {
    Juego* g[MAX_JUEGOS];
    int tope=0;
} colJuegos;

void agregarJugador(string nickname, int edad, string password){
    int i = 0;
    while(i<colJugadores.tope && colJugadores.j[i]->getNickname()!=nickname)
        i++;
    if(i==colJugadores.tope){
        Jugador* jugador = new Jugador(nickname,edad,password);
        colJugadores.j[colJugadores.tope]=jugador;
        colJugadores.tope++;
        cout << "Jugador " << nickname << " ingresado succesfully \n";

    } else {
        throw invalid_argument("Ya existe un jugador con ese nickname");
    }
}

DtJugador** obtenerJugadores(int& cantJugadores){
    DtJugador** j = new DtJugador*[colJugadores.tope];
    for(int i=0; i<colJugadores.tope; i++){
        DtJugador* dt = colJugadores.j[i]->getDtJugador();
        j[i] = dt;
        cantJugadores++;
    }
    cout << "Jugadores retornados succesfully" << endl;
    cantJugadores = colJugadores.tope;
    return j;    
}

void imprimirJugadores(DtJugador** dtjs, int cant){
    cout << "\nListado de jugadores\n" << endl;
    cout << "-----------------------------------------\n" << endl;

    for(int i=0; i<cant; i++){
        cout << *dtjs[i] << endl;
        }
}

void agregarVideojuego(string nombre, TipoGenero genero){
    int i = 0;
    while(i<colJuegos.tope && colJuegos.g[i]->getNombre()!=nombre)
        i++;
    if(i==colJuegos.tope){
        Juego* juego = new Juego(nombre, genero);
        colJuegos.g[colJuegos.tope]=juego;
        colJuegos.tope++;
        cout << "Juego " << nombre << " registrado succesfully \n";

    } else {
        throw invalid_argument("Ya existe un juego con ese nombre");
    }
}

int main(){
    try
    {
        int cant;
        agregarJugador("xXJorgeXx", 9, "jorge");
        agregarJugador("xXPepeXx", 13, "pepe123");
        agregarVideojuego("Liga de las leyendas", OTRO);
        agregarVideojuego("PES 2022", DEPORTE);
        DtJugador** jug = obtenerJugadores(cant);
        
        imprimirJugadores(jug, cant);
        
        
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

};

