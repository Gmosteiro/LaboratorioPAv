#include "DtFecha.h"
#include "Vengador.h"
#include "DtLugar.h"
#include "DtTerrestre.h"
#include "DtEspacial.h"
#include <iostream>

using namespace std;

int main(){
try
{
    DtFecha* f = new DtFecha(4,7,1918);
    DtFecha* f2 = new DtFecha(29,5,1970);
    Vengador* v = new Vengador("Capitan America", 50, *f);
    Vengador* v2 = new Vengador("Tony Stark", 45, *f2);
    DtTerrestre* dtt = new DtTerrestre("California", MENTE, 5, "EEUU");
    DtEspacial* dte = new DtEspacial("Via Lactea", ESPACIO, 10, 5);

    cout << *f << "\n";

    if(f==f2){
        cout << "Iguales\n";
    }else{
        cout << "Distintos\n";
    }

    if(v->getFechaNac() < v2->getFechaNac()){
        cout << v2->getNombre() << "\n";
    }else{
        cout << v->getNombre() << "\n";
    }

    cout << *dtt << "\n";
    cout << *dte << "\n";
    
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}    

}