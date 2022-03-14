#include "DtFecha.h"

    Fecha::Fecha(){

    }

    Fecha::Fecha(int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    }

    void Fecha::setDia(int dia){
        this->dia = dia;
    }
    int Fecha::getDia(){
        return this->dia;
    }
    void Fecha::setMes(int mes){
        this->mes = mes;
    }
    int Fecha::getMes(){
        return this->mes;
    }
    void Fecha::setAnio(int anio){
        this->anio = anio;
    }
    int Fecha::getAnio(){
        return this->anio;
    }

    Fecha::~Fecha(){

    }

    ostream& operator << (ostream& salida, Fecha& fecha){

        cout << fecha.dia << "-" << fecha.mes << "-" << fecha.anio << endl;
        return salida; 

    }

    bool operator == (const Fecha& f1, const Fecha& f2){

        return f1.dia == f2.dia && f1.mes == f2.mes && f1.anio == f2.anio;

    }
    bool operator < (const Fecha& f1, const Fecha& f2){
        return f1.dia == f2.dia && f1.mes == f2.mes && f1.anio == f2.anio;
    }