#include "Item.h"
#include <string>
#include "Monstruo.h"
#include "Heroe.h"

#ifndef FLECHAS_H
#define FLECHAS_H

using namespace std;

class Flechas: public Item{

	public:
		Flechas(string, string);
		void ataque(Monstruo*, Heroe*);
};

#endif
