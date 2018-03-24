#include "Item.h"
#include <string>
#include "Monstruo.h"
#include "Heroe.h"

#ifndef BOMBA_H
#define BOMBA_H

using namespace std;

class Bomba: public Item{

	public:
		Bomba(string, string);
		void ataque(Monstruo*, Heroe*);
};

#endif
