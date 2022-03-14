#ifndef VENGADOR
#define VENGADOR
#include "DtFecha.h"
#include <string>

using namespace std;

class Vengador {
    private:
        string nombre;
        int poder;
        DtFecha fechaNac;
    public:
        Vengador();
        Vengador(string nombre, int poder, DtFecha fechaNac);
        string getNombre();
        void setNombre(string nombre);
        int getPoder();
        void setPoder(int poder);
        DtFecha getFechaNac();
        void setFechaNac(DtFecha fechaNac);
        ~Vengador();

        friend bool operator < (Vengador&,Vengador&);
};

#endif