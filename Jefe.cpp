#include "Heroe.h"
#include "Jefe.h"
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Jefe::Jefe(string nombre, int defense, int att, int debi):Monstruo(nombre, vida, defense, att, debi){
	int vida =0;
	while (vida < 26 || vida > 40){
		cout<<"Ingrese la vida del monstruo (entre 26-40)"<<endl;
		cin>>vida;
	}
}

void Jefe:: derrotado(Heroe* heroe){
	heroe->aumentarMax();
	heroe->addDefeated();
	heroe->restoreHP();
}
