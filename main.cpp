#include "Sistema.h"
#include <iostream>
#include <ctime>

using namespace std;

int main(){   
        Sistema* s; 
        int cantJ, cantG, cantP;        
        string nickname, password;
        int edad;
        int opcion = 0;
        DtJugador** jug;
        DtJuego** gam;
        DtPartida** par;
        try{
        s->menu();
        cin.clear();
        cin >> opcion;
        while(opcion!=10){   
            switch(opcion){
                case 1: 
                        system("clear");
                        s->menuAgregarJugador();
                    break;
                case 2: 
                        system("clear");
                        jug = s->obtenerJugadores(cantJ);
                        s->imprimirJugadores(jug, cantJ);
                    break;
                case 3: 
                        system("clear");
                        s->menuAgregarVideoJuego();
                    break;
                case 4: 
                        system("clear");
                        gam = s->obtenerVideojuegos(cantG);
                        s->imprimirVideojuegos(gam, cantG);
                    break;
                case 5: 
                        system("clear");
                        s->menuIniciarPartida();                 
                    break;
                case 6: 
                       {system("clear");
                            string g;
                            cout << "Ingrese juego para buscar\n" << endl;
                            cin.ignore();
                            getline(cin, g);
                            //cin >> g;
                            par = s->obtenerPartidas(g, cantP);
                            s->imprimirPartidas(par, cantP);
                       }
                    break;
                default:
                        cout << "\nSeleccione una opcion valida\n" << endl;
                    break;
                }
        s->menu();
        cin.clear();      
        cin >> opcion;
    }
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
};

// FESTEJEN URUGUAYOS!!!
