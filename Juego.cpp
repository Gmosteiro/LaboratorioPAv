#include "Juego.h"

    Juego::Juego(){}
    Juego::Juego(string nombre, TipoGenero genero){
        this->nombre = nombre;
        this->genero = genero;
    }
    string Juego::getNombre(){
        return this->nombre;
    }
    void Juego::setNombre(string nombre){
        this->nombre = nombre;
    }
    TipoGenero Juego::getGenero(){
        return this->genero;
    }
    void Juego::setGenero(TipoGenero genero){
        this->genero = genero;
    }
    Partida** Juego::getPartidas(int &cantP){
        cantP = this->tope;
        return this->partidas;
    }
    void Juego::setPartidas(Partida* p){
        this->partidas[this->tope]=p;
        this->tope++;
    }
    int Juego::getTope(){
        return this->tope;
    }
    void Juego::setTope(int tope){
        this->tope = tope;
    }
    DtJuego* Juego::getDtJuego(){
        DtJuego* dt = new DtJuego(this->nombre, this->genero, 0); //darTotalHorasParticipantes()
        return dt;
    }
    
    Juego::~Juego(){}