#include "Heroe.h"
#include "Jefe.h"
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Jefe::Jefe(string nombre, int defense, int att, int debi):Monstruo(nombre, vida, defense, att, debi){
	HP =0;
	while (HP < 26 || HP > 40){
		cout<<"Ingrese la vida del monstruo (entre 26-40)"<<endl;
		cin>>HP;
	}
	vida = HP;
	max_vida=HP;
}

void Jefe:: derrotado(Heroe* heroe){
	heroe->aumentarMax();
	heroe->addDefeated();
	heroe->restoreHP();
}
