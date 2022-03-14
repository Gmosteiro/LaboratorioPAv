#include "DtFecha.h"
#include "iostream"
#include "Vengador.h"

using namespace std;

int main(){

    Fecha* f = new Fecha(4,7,1918);
    Fecha* f2 = new Fecha(29,5,1970);
    Vengador* v1 = new Vengador("Capitan America", 50, *f);
    Vengador* v2 = new Vengador("Iron Man", 45, *f2); 
    cout << *f << "\n";

    if(f==f2){
        cout << "Iguales";
    }else{
        cout << "Distintos";
    }

    if(f<f2){
        cout << v1->getNombre() << "\n";
    }else{
        cout << v2->getNombre() << "\n";
    }

}