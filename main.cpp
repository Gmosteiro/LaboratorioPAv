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
    for (int i=0; i<colJugadores.tope; i++){
        if(colJugadores.j[i]->getNickname()==nickname){
            throw invalid_argument("Ya existe un jugador con ese nick\n");
        }else{
            Jugador* p = new Jugador(nickname, edad, password);
            colJugadores.j[colJugadores.tope]=p;
            colJugadores.tope++;
        }
    }
}


Jugador* agregarJugador(string nickname, int edad, string password){
	Jugador* jugadorObtenido;
	int i=0;
	bool existe=false;
	while((i<colJugadores.cant)&&(!existe)){
		if(id == colJugadores.jugador[i]->getnickname()){
			jugadorObtenido=colJugador.jugador[i];
			existe=true;
		}
		i++;
	}
	return jugadorObtenido;

int main(){
    try
    {
        agregarJugador("xXPepeXx", 13, "pepe123");
        agregarJugador("xXPepeXx", 10, "pepe141");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

};

