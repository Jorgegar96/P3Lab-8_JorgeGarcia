#include "Heroe.h"
#include "Comun.h"
#include <string>
#include <iostream>
using namespace std;

Comun::Comun(string nombre, int defense, int atack, int debi):Monstruo(nombre, vida, defense, atack, debi){
	int vida =0;
	while (vida < 4 || vida > 12){
		cout<<"Ingrese la vida del monstruo (entre 4-12)"<<endl;
		cin>>vida;
	}
}

void Comun:: derrotado(Heroe* heroe){
	heroe->setDinero(40);
	heroe->restoreHP();
}

