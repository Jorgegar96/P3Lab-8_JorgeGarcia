#include "Monstruo.h"
#include "Heroe.h"
#include <string>

#ifndef JEFE_H
#define JEHE_H

using namespace std;

class Jefe: public Monstruo{

	public:
		Jefe(string, int, int, int);
		void derrotado(Heroe*);
};

#endif
