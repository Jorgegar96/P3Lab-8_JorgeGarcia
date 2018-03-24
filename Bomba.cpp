#include "Monstruo.h"
#include "Heroe.h"
#include "Bomba.h"
#include "Item.h"

#include <string>

using namespace std;

Bomba:: Bomba(string nombre, string color): Item(nombre, color){}

void Bomba:: ataque(Monstruo* monstruo, Heroe* heroe){
	if (monstruo->getDebilidad() == 3){
		monstruo->setVida((20-monstruo->defensa())*-1);
	}else{
		monstruo->setVida( (10-monstruo->defensa()*-1) );
	}
	heroe->explo(-4);
}
