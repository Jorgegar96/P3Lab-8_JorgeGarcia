#include "Monstruo.h"
#include "Heroe.h"
#include "Bomba.h"
#include "Item.h"

#include <string>

using namespace std;

Bomba:: Bomba(string nombre, string color): Item(nombre, color){}

void Bomba:: ataque(Monstruo* monstruo, Heroe* heroe){
	monstruo->setVida((10-monstruo->defensa())*-1);
	heroe->setVida(-4);
}
