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
        int totalHoras = 0;
        for(int i=0;i<this->tope;i++){
            totalHoras += this->partidas[i]->darTotalHorasParticipantes();
        }
        DtJuego* dt = new DtJuego(this->nombre, this->genero, totalHoras); //darTotalHorasParticipantes()
        return dt;
    }
    
    Juego::~Juego(){}