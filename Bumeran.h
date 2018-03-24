#ifndef BUMERAN_H
#define BUMERAN_H

#include "Item.h"
#include <string>

using namespace std;

class Bumeran: public Item{

	public:
		Bumeran(string, string);
	       	void ataque(Monstruo*, Heroe*);
};

#endif
