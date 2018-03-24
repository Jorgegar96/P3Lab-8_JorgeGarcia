#include "Monstruo.h"
#include "Heroe.h"
#include <string>

#ifndef COMUN_H
#define COMUN_H

using namespace std;

class Comun: public Monstruo{

	public:
		Comun(string, int, int, int);
		void derrotado(Heroe*);
};

#endif
