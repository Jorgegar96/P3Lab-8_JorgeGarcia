#ifndef JOVEN_H
#define JOVEN_H

#include <string>
#include "Heroe.h"
#include "Monstruo.h"

class Joven: public Heroe{

	public:
		Joven(string, int, int, int, int, Item*);
		int defensa();
		void ataque(Monstruo*);
		void atEsp(Monstruo*);
};

#endif
