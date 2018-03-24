temp:	main.o Heroe.o Joven.o Adulto.o Item.o Bomba.o Flechas.o Bumeran.o Monstruo.o Jefe.o Subjefe.o Comun.o
	g++ main.o Heroe.o Joven.o Adulto.o Bomba.o Flechas.o Bumeran.o Monstruo.o Jefe.o Subjefe.o Comun.o -o temp
main.o:	main.cpp Heroe.h Joven.h Adulto.h Monstruo.h Jefe.h Subjefe.h Comun.h Item.h Bumeran.h Bomba.h Flechas.h 
		g++ -c main.cpp
Heroe.o:	Heroe.cpp Heroe.h Item.h Monstruo.h
		g++ -c Heroe.cpp
Joven.o:	Joven.cpp Joven.h Heroe.h Monstruo.h
		g++ -c Joven.cpp
Adulto.o:	Adulto.cpp Adulto.h Heroe.h Monstruo.h
		g++ -c Adulto.cpp
Item.o:	Item.cpp Item.h Monstruo.h Heroe.h
		g++ -c Item.cpp
Bomba.o:	Bomba.cpp Bomba.h Item.h Monstruo.h Heroe.h 
		g++ -c Bomba.cpp
Flechas.o:	Flechas.cpp Flechas.h Item.h Monstruo.h Heroe.h
		g++ -c Flechas.cpp
Bumeran.o:	Bumeran.cpp Bumeran.h Item.h Monstruo.h Heroe.h
		g++ -c Bumeran.cpp
Monstruo.o:	Monstruo.cpp Monstruo.h Heroe.h
		g++ -c Monstruo.cpp
Jefe.o:	Jefe.cpp Jefe.cpp Monstruo.h Heroe.h
		g++ -c Jefe.cpp
Subjefe.o:	Subjefe.cpp Subjefe.h Monstruo.h Heroe.h
		g++ -c Subjefe.cpp
Comun.o:	Comun.cpp Comun.h Monstruo.h Heroe.h
		g++ -c Comun.cpp

	
