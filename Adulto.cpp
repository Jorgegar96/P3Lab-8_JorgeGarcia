#include "Adulto.h"
#include "Monstruo.h"
#include <iostream>

using namespace std;

Adulto:: Adulto(string nombre, int vida, int defeated, int dinero, int max_vida, Item* item):Heroe(nombre, vida, defeated, dinero, max_vida, item){}

int Adulto:: defensa(){
	return 4;
}

void Adulto:: ataque(Monstruo* monstruo){
	monstruo->setVida( (8-monstruo->defensa())*-1 );
}

void Adulto:: atEsp(Monstruo* monstruo){
	if(!especial){
		monstruo->setVida( (12-monstruo->defensa())*-1 );
		especial = true;
	}else{
		cout<<"El ataque especial solo puede ser usado una vez por batalla"<<endl;
	}
}
