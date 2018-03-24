#ifndef ADULTO_H
#define ADULTO_H

#include "Heroe.h"
#include "Monstruo.h"

class Adulto: public Heroe{

	public:
		Adulto(string, int, int, int, int, Item*);
		int defensa();
		void ataque(Monstruo*);
		void atEsp(Monstruo*);	
};

#endif
