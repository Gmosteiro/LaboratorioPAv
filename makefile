principal: clean clear main.o DtJugador.o Jugador.o 
	g++ DtJugador.o Jugador.o main.o -o sistema.exe
DtJugador.o: DtJugador.cpp
	g++ -g -c DtJugador.cpp
Jugador.o: Jugador.cpp
	g++ -g -c Jugador.cpp
main.o: main.cpp
	g++ -g -c main.cpp
clean:
	rm -rf *.o sistema
clear:
	clear
