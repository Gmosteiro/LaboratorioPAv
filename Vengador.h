#ifndef VENGADOR
#define VENGADOR
#include <string>
#include "iostream"
#include "DtFecha.h"

using namespace std;

class Vengador{
    private:
        string nombre;
        int poder;
        Fecha fechaNac;
    public:
        Vengador(string nombre, int poder ,Fecha fechaNac);
        Vengador();
        void setNombre(string nombre);
        void setPoder(int poder);
        void setFechaNac(Fecha fechaNac);
        string getNombre();
        int getPoder();
        Fecha getFechaNac(); 
        ~Vengador();

        friend bool operator < (Vengador&,Vengador&);

};
#endif
