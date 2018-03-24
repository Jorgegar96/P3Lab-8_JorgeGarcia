#include "Item.h"
#include "Monstruo.h"
#include "Item.h"
#include <string>

using namespace std;

Item:: Item(string nombre, string color){
	this->nombre = nombre;
	this->color = color;
}

string Item:: getNombre(){
	return nombre;
}

string Item:: getColor(){
	return color;
}


