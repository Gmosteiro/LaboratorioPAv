    #include "Vengador.h"
    
    Vengador::Vengador(){}
    Vengador::Vengador(string nombre, int poder, DtFecha fechaNac){
        this->nombre = nombre;
        this->poder = poder;
        this->fechaNac = fechaNac;
    }
    string Vengador::getNombre(){
        return this->nombre;
    }
    void Vengador::setNombre(string nombre){
        this->nombre = nombre;
    }
    int Vengador::getPoder(){
        return this->poder;
    }
    void Vengador::setPoder(int poder){
        this->poder = poder;
    }
    DtFecha Vengador::getFechaNac(){
        return this->fechaNac;
    }
    void Vengador::setFechaNac(DtFecha fechaNac){
        this->fechaNac = fechaNac;
    }
    Vengador::~Vengador(){}

    bool operator < (Vengador& v1,Vengador& v2){
        return v1.fechaNac < v2.fechaNac;
    }