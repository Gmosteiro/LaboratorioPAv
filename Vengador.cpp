#include "Vengador.h"


Vengador::Vengador(string nombre, int poder, Fecha fechaNac){
        this->nombre = nombre;
        this->poder = poder;
        this->fechaNac = fechaNac;
    }
Vengador::Vengador(){}

string Vengador::getNombre(){
    return this->nombre;
}
void Vengador::setNombre(string nombre){
    this->nombre = nombre;
}
Fecha Vengador::getFechaNac(){
    return this->fechaNac;
}
void Vengador::setPoder( int poder){
    this->poder = poder;
}
void Vengador::setFechaNac(Fecha fechaNac){
    this->fechaNac = fechaNac;
}
int Vengador::getPoder(){
    return this->poder;
}
Vengador::~Vengador(){}

bool operator < (Vengador& v1 ,Vengador& v2){
    return v1.fechaNac < v2.fechaNac;
}
