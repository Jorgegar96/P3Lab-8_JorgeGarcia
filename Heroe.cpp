#include "Heroe.h"
#include "Item.h"
#include <string>

using namespace std;



Heroe:: Heroe(string nombre, int vida, int defeated, int dinero, int max_vida, Item* item){
	this->nombre = nombre;
	this->vida = vida;
	this->defeated = defeated;
	this->dinero = dinero;
	this->item = item;
	this->max_vida = max_vida;
	especial = false;

}

void Heroe::explo(int cambio){
	vida+=cambio;
}

string Heroe:: getNombre(){
	return nombre;
}

int Heroe:: getVida(){
	return vida;
}

void Heroe:: setVida(int cambio){
	if (vida+cambio <= max_vida){
		vida+=cambio;
	}
}

Item* Heroe:: getItem(){
	return item;
}

void Heroe:: setItem(Item* item){
	this->item = item;
}

int Heroe:: getDefeated(){
	return defeated;
}

void Heroe:: addDefeated(){
	defeated++;
}

int Heroe:: getDinero(){
	return dinero;
}

void Heroe:: setDinero(int diferencia){
	dinero+= diferencia;
}

void Heroe:: useItem(Monstruo* monstruo){
	item->ataque(monstruo, self);
}

int Heroe:: getMax(){
	return max_vida;
}

void Heroe:: resetEspecial(){
	especial = false;
}

void Heroe:: setSelf(Heroe* heroe){
	this->self = heroe;
}

void Heroe:: aumentarMax(){
	max_vida+=4;
}

void Heroe:: restoreHP(){
	vida = max_vida;
}


