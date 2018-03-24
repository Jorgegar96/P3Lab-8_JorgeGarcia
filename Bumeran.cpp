#include "Monstruo.h"
#include "Heroe.h"
#include "Bumeran.h"
#include "Item.h"

#include <string>

using namespace std;

Bumeran:: Bumeran(string nombre, string color): Item(nombre, color){}

void Bumeran:: ataque(Monstruo* monstruo, Heroe* heroe){
	if(monstruo->getDebilidad() == 1){
		monstruo->setVida( (10-monstruo->defensa())*-1 );
	}else{
		monstruo->setVida( (5-monstruo->defensa())*-1);
	}
}
