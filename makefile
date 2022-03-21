principal: clean clear main.o DtJugador.o Jugador.o Juego.o DtJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o
	g++ DtJugador.o Jugador.o Juego.o DtJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o main.o -o sistema.exe
DtJugador.o: DtJugador.cpp
	g++ -g -c DtJugador.cpp
Jugador.o: Jugador.cpp
	g++ -g -c Jugador.cpp
Juego.o: Juego.cpp
	g++ -g -c Juego.cpp
DtJuego.o: DtJuego.cpp
	g++ -g -c DtJuego.cpp
Partida.o: Partida.cpp
	g++ -g -c Partida.cpp
PartidaIndividual.o: PartidaIndividual.cpp
	g++ -g -c PartidaIndividual.cpp
PartidaMultijugador.o: PartidaMultijugador.cpp
	g++ -g -c PartidaMultijugador.cpp
main.o: main.cpp
	g++ -g -c main.cpp
clean:
	rm -rf *.o sistema
clear:
	clear
