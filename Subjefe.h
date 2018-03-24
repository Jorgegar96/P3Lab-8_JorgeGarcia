#include "Monstruo.h"
#include "Heroe.h"
#include <string>

#ifndef SUBJEFE_H
#define SUBJEFE_H

using namespace std;

class Subjefe: public Monstruo{

	public:
		Subjefe(string, int, int, int);
		void derrotado(Heroe*);
};

#endif
