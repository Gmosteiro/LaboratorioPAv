#include "DtJugador.h"
#include "Jugador.h"
#include <iostream>
#define MAX_JUGADORES 100

using namespace std;

//COLECCIONES GLOBALES
struct Jugadores {
    Jugador* j[MAX_JUGADORES];
    int tope=0;
} colJugadores;

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

int main(){
    try
    {
        agregarJugador("xXJorgeXx", 9, "jorge");
        agregarJugador("xXPepeXx", 13, "pepe123");
        agregarJugador("xXPepeXx", 10, "pepe141");
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

};

