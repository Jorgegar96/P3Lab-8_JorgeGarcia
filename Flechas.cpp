#include "Monstruo.h"
#include "Heroe.h"
#include "Flechas.h"
#include <string>
#include "Item.cpp"

using namespace std;

Flechas:: Flechas(string nombre, string color):Item(nombre, color){}

void Flechas:: ataque(Monstruo* monstruo, Heroe* heroe){
	if(monstruo->getDebilidad() == 2){
		monstruo->setVida(-8);
	}else{
	
		monstruo->setVida( -4 );
	}
}
