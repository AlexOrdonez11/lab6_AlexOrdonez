temp:	main.o Orejas.o Animal.o Patas.o Colo.o Ojos.o Pelaje.o Zoologico.o
		g++ main.o Animal.o Patas.o Colo.o Ojos.o Pelaje.o Zoologico.o Orejas.o -o temp
main.o:	main.cpp Animal.h Patas.h Orejas.h Cola.h Pelaje.h Zoologico.h Ojos.h 
		g++ -c main.cpp
Orejas.o:	Orejas.h Orejas.cpp
		g++ -c Orejas.cpp
Animal.o:	Animal.cpp Patas.h Orejas.h Cola.h Pelaje.h Ojos.h Animal.h
	g++ -c Animal.cpp
Patas.o:	Patas.cpp Patas.h
	g++ -c Patas.cpp
Colo.o:	Colo.cpp Cola.h
	g++ -c Colo.cpp
Ojos.o:	Ojos.cpp Ojos.h
	g++ -c Ojos.cpp
Pelaje.o:	Pelaje.cpp Pelaje.h
	g++ -c Pelaje.cpp
Zoologico.o:	Zoologico.cpp Zoologico.h Animal.h
	g++ -c Zoologico.cpp

		
