#include "Heroe.h"
#include "Subjefe.h"
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Subjefe::Subjefe(string nombre, int defense, int att, int debi):Monstruo(nombre, vida, defense, att, debi){
	int vida =0;
	while (vida < 12 || vida > 26){
		cout<<"Ingrese la vida del monstruo (entre 12-26)"<<endl;
		cin>>vida;
	}
}

void Subjefe:: derrotado(Heroe* heroe){
	heroe->setDinero(100);
	heroe->restoreHP();
}
