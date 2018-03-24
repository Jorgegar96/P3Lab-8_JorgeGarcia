#include "Joven.h"
#include "Monstruo.h"
#include <iostream>

using namespace std;

Joven:: Joven(string nombre, int vida, int defeated, int dinero, int max_vida, Item* item):Heroe(nombre, vida, defeated, dinero, max_vida, item){}

int Joven:: defensa(){
	return 2;
}

void Joven:: ataque(Monstruo* monstruo){
	monstruo->setVida( (4-monstruo->defensa())*-1);
}

void Joven:: atEsp(Monstruo* monstruo){
	cout<<"Eres muy joven para usar este ataque!"<<endl;
}
