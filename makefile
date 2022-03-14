#REGLA:DEPENDENCIAS

principal: clear clean main.o DtFecha.o Vengador.o
	g++ main.o DtFecha.o -g -o sistema

main.o: main.cpp
	g++ -g -c main.cpp

DtFecha.o: DtFecha.cpp
	g++ -g -c DtFecha.cpp

Vengador.o: Vengador.cpp
	g++ -g -c Vengador.cpp

clean:
	rm -rf *.o sistema

clear:
	clear