#include "Monstruo.h"
#include "Heroe.h"

#include <string>

using namespace std;

Monstruo:: Monstruo(string nombre, int vida, int def, int att, int debilidad){
	this->nombre = nombre;
	
	this->def = def;
	this->att = att;
	this->debilidad = debilidad;
}

void Monstruo:: newHP(int HP){
	vida = HP;
}

string Monstruo:: getNombre(){
	return nombre;
}

int Monstruo::getVida(){
	return vida;
}

void Monstruo::setVida(int cambio){
	vida+=cambio;
}

int Monstruo::defensa(){
	return def;
}

void Monstruo::ataque(Heroe* heroe){
	heroe->setVida( (att-heroe->defensa())  *  -1 );
}


