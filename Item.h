#ifndef ITEM_H
#define ITEM_H

#include "Heroe.h"
#include "Monstruo.h"
#include <string>

using namespace std;

class Item{

	protected:
		string nombre;
		string color;

	public:
		Item(string, string);
		string getNombre();
		string getColor();
		virtual void ataque(Monstruo*, Heroe*) =0;
			
};

#endif
