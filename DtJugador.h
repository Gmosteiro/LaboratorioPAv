#ifndef DTJUGADOR
#define DTJUGADOR
#include <string>
#include <iostream>

using namespace std;

class DtJugador{
private:
    string nickname;
    int edad;
public:
    DtJugador();
    DtJugador(string nickname, int edad);
    string getNickname();
    void setNickname(string nickname);
    int getEdad();
    void setEdad(int edad);
    ~DtJugador();

    friend ostream& operator <<(ostream&,DtJugador&);
    };

#endif