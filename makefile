principal: clear clean main.o DtJugador.o Jugador.o Juego.o DtJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o
	g++ DtJugador.o Jugador.o Juego.o DtJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o main.o -o sistema
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
DtPartida.o: DtPartida.cpp
	g++ -g -c DtPartida.cpp
DtPartidaIndividual.o: DtPartidaIndividual.cpp
	g++ -g -c DtPartidaIndividual.cpp
DtPartidaMultijugador.o: DtPartidaMultijugador.cpp
	g++ -g -c DtPartidaMultijugador.cpp
DtFechaHora.o: DtFechaHora.cpp
	g++ -g -c DtFechaHora.cpp	
main.o: main.cpp
	g++ -g -c main.cpp
clean:
	rm -rf *.o sistema sistema.exe
clear:
	clear
