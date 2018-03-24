#include "Heroe.h"
#include "Comun.h"
#include <string>
#include <iostream>
using namespace std;

Comun::Comun(string nombre, int defense, int atack, int debi):Monstruo(nombre, vida, defense, atack, debi){
	int HP =0;
	while (HP < 4 || HP > 12){
		cout<<"Ingrese la vida del monstruo (entre 4-12)"<<endl;
		cin>>HP;
	}
	vida = HP;
	max_vida = HP;
}

void Comun:: derrotado(Heroe* heroe){
	heroe->setDinero(40);
	heroe->restoreHP();
}

