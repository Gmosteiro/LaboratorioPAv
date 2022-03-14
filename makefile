#REGLA:DEPENDENCIAS

principal: clear clean main.o DtFecha.o DtLugar.o DtTerrestre.o DtEspacial.o Vengador.o
	g++ main.o DtFecha.o DtLugar.o DtTerrestre.o DtEspacial.o Vengador.o -g -o sistema

main.o: main.cpp
	g++ -g -c main.cpp

DtFecha.o: DtFecha.cpp
	g++ -g -c DtFecha.cpp

DtLugar.o: DtLugar.cpp
	g++ -g -c DtLugar.cpp

DtTerrestre.o: DtTerrestre.cpp
	g++ -g -c DtTerrestre.cpp

DtEspacial.o: DtEspacial.cpp
	g++ -g -c DtEspacial.cpp

Vengador.o: Vengador.cpp
	g++ -g -c Vengador.cpp

clean:
	rm -rf *.o sistema

clear:
	clear