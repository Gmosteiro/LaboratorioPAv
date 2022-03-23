#include "DtJugador.h"
#include "Jugador.h"
#include "Juego.h"
#include "DtJuego.h"
#include "DtPartida.h"
#include "DtPartidaIndividual.h"
#include "DtPartidaMultijugador.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include <iostream>
#define MAX_JUGADORES 1
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
    if(i==colJugadores.tope && i != MAX_JUGADORES){
        Jugador* jugador = new Jugador(nickname,edad,password);
        colJugadores.j[colJugadores.tope]=jugador;
        colJugadores.tope++;
        cout << "Jugador " << nickname << " ingresado succesfully \n";

    } else {
        throw invalid_argument("Maximo de jugadores ingresados o ya existe un jugador con ese nickname");
    }
}

DtJugador** obtenerJugadores(int& cantJugadores){
    DtJugador** j = new DtJugador*[colJugadores.tope];
    for(int i=0; i<colJugadores.tope; i++){
        DtJugador* dt = colJugadores.j[i]->getDtJugador();
        j[i] = dt;
        cantJugadores++;
    }
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

DtJuego** obtenerVideojuegos(int& cantVideojuegos){
    DtJuego** g = new DtJuego*[colJuegos.tope];
    for(int i=0; i<colJuegos.tope; i++){
        DtJuego* dt = colJuegos.g[i]->getDtJuego();
        g[i] = dt;
        cantVideojuegos++;
    }
    cantVideojuegos = colJuegos.tope;
    return g;    
}

void iniciarPartida(string nickname, string videojuego, DtPartida* datos){

    bool existeJugador = false;
    bool existeJuego = false;
    int index;

    for(int i=0; i<colJugadores.tope; i++){
        if(colJugadores.j[i]->getNickname()==nickname && !existeJugador){  
            existeJugador=true;
        }
    }

    if(existeJugador){

        for(int j=0; j<colJuegos.tope; j++){
                if(colJuegos.g[j]->getNombre()==videojuego && !existeJuego){

                    existeJuego=true;
                    index = j;
                    

                }
            }

        if(existeJuego){

            DtPartidaIndividual* dti = dynamic_cast<DtPartidaIndividual*>(datos);
            if(dti != NULL){
                
                Partida* pi = new PartidaIndividual(dti->getFecha(), dti->getDuracion(), dti->getcontinuaPartidaAnterior());

            }else{
                DtPartidaMultijugador* dtm = dynamic_cast<DtPartidaMultijugador*>(datos);
                if(dtm != NULL){

                Partida* pm = new PartidaMultijugador(dtm->getFecha(), dtm->getDuracion(), dtm->getTransmitidaEnVivo(), dtm->getCantParticipantes());

                }
            }
            


        }else{

            throw invalid_argument("No existe el juego");

        }

    }else{

        throw invalid_argument("No existe el jugador");

    }

    

}

void imprimirVideojuegos(DtJuego** dtgs, int cant){
    cout << "\nListado de videojuegos\n" << endl;
    cout << "-----------------------------------------\n" << endl;

    for(int i=0; i<cant; i++){
        cout << *dtgs[i] << endl;
        }
}

void menu(){
    cout << "________________________________" << endl;
    cout << "_______ALGO DE VIDEOJUEGOS_________________" << endl;
    cout << "1. Agregar Jugador" << endl;
    cout << "2. Imprimir Jugadores" << endl;
    cout << "3. Agregar VideoJuego" << endl;
    cout << "4. Imprimir VideoJuegos" << endl;
    cout << "5. Iniciar Partida" << endl;
    cout << "10. Salir" << endl;
    cout << "___________________________" << endl;
    cout << "OPCION: ";
}


void menuAgregarJugador(){
    string nickname, password;
    int edad;
    cout << "\nAgregar Jugador\n";
    cout << "-----------------------------------------\n";
    cout << "\nIngrese nickname:\n";
    cin >> nickname;
    cout << "\nIngrese edad:\n";
    cin >> edad;
    cout << "\nIngrese password:\n";
    cin >> password;
    try{
        agregarJugador(nickname, edad, password);
    } catch (invalid_argument& e){
        cout << e.what() << endl;
    }    
}

void menuAgregarVideoJuego(){

    string nombre;
    int genero;
    TipoGenero tipoGenero;
    cout << "\nAgregar Videojuego\n";
    cout << "-----------------------------------------\n";
    cout << "\nIngrese nombre:\n";
    cin >> nombre;
    cout << "\nIngrese el genero (1. ACCION, 2. AVENTURA, 3. DEPORTE, 4. OTRO)\n";
    cin >> genero;
    switch (genero)
    {
    case 1:
        tipoGenero = ACCION;
        break;
    case 2:
        tipoGenero = AVENTURA;
        break;
    case 3:
        tipoGenero = DEPORTE;
        break;
    case 4:
        tipoGenero = OTRO;
        break;
    }

    try{
        agregarVideojuego(nombre, tipoGenero);
    } catch (invalid_argument& e){
        cout << e.what() << endl;
    }    
}

int main(){
    
        int cantJ, cantG, cantP;
        
        string nickname, password;
        int edad;

        DtJugador** jug;
        DtJuego** gam;
        Partida** par;

        try{
        menu();
        int opcion;
        cin >> opcion;
        while(opcion!=10){   
            switch(opcion){
                case 1: 
                        system("clear");
                        menuAgregarJugador();
                    break;
                case 2: 
                        system("clear");
                        jug = obtenerJugadores(cantJ);
                        imprimirJugadores(jug, cantJ);
                    break;
                case 3: 
                        system("clear");
                        menuAgregarVideoJuego();
                    break;
                case 4: 
                        system("clear");
                        gam = obtenerVideojuegos(cantG);
                        imprimirVideojuegos(gam, cantG);
                    break;
                case 5: 
                        system("clear");
                        
                break;
                default:
                        cout << "\nSeleccione una opcion valida\n" << endl;
                    break;
                }
    menu();
    cin >> opcion;
    
    }}catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    

};

