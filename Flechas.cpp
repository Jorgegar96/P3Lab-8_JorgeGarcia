#include "Monstruo.h"
#include "Heroe.h"
#include "Flechas.h"
#include <string>
#include "Item.cpp"

using namespace std;

Flechas:: Flechas(string nombre, string color):Item(nombre, color){}

void Flechas:: ataque(Monstruo* monstruo, Heroe* heroe){
	monstruo->setVida( -4 );
}
