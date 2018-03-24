#include "Heroe.h"
#include "Subjefe.h"
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Subjefe::Subjefe(string nombre, int defense, int att, int debi):Monstruo(nombre, vida, defense, att, debi){
	int HP =0;
	while (HP < 12 || HP > 26){
		cout<<"Ingrese la vida del monstruo (entre 12-26)"<<endl;
		cin>>HP;
	}
	vida = HP;
}

void Subjefe:: derrotado(Heroe* heroe){
	heroe->setDinero(100);
	heroe->restoreHP();
}
