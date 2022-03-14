#include "DtFecha.h"
DtFecha::DtFecha(){}
DtFecha::DtFecha(int dia,int mes,int anio){
    if(dia > 31 || dia < 1 || mes > 12 || mes < 1 || anio < 1900){
      throw invalid_argument("Fecha no valida\n");
    }else{
      this->dia=dia;
      this->mes=mes;
      this->anio=anio;
    }
    
    
}
int DtFecha::getDia(){
  return this->dia;
}
void DtFecha::setDia(int dia){
    if(dia > 31 || dia < 1){
      throw invalid_argument("Dia invalido\n");
    }else{
      this->dia=dia;
    }
}
int DtFecha::getMes(){
  return this->mes;
}
void DtFecha::setMes(int mes){
  if(mes > 12 || mes < 1){
      throw invalid_argument("Mes invalido\n");
    }else{
      this->mes=mes;
    }
}
int DtFecha::getAnio(){
  return this->anio;
}
void DtFecha::setAnio(int anio){
  if(anio < 1900){
      throw invalid_argument("Año invalido\n");
    }else{
      this->anio=anio;
    }
}
DtFecha::~DtFecha(){}

ostream& operator <<(ostream& salida,DtFecha& fecha){
  cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
  return salida;
}

bool operator <(const DtFecha& f1, const DtFecha& f2){
  if(f1.anio<f2.anio){
    return true;
  }else if(f1.anio==f2.anio){
    if(f1.mes<f2.mes){
      return true;
    }else if (f1.mes==f2.mes){
      if(f1.dia<f2.dia){
        return true;
      }
    } 
  }
  return false;
}

bool operator ==(const DtFecha& x, const DtFecha& y){
  return x.dia==y.dia && x.mes==y.mes && x.anio==y.anio;
}