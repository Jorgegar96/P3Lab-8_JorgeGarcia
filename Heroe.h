#ifndef HEROE_H
#define HEROE_H


#include "Monstruo.h"
#include <string>
using namespace std;
class Item;
class Heroe{

	protected: 
		string nombre;
		int vida;
		Item* item;
		int defeated;
		int dinero;
		bool especial;
		Heroe* self;
		int max_vida;

	public:
		Heroe(string, int, int, int, int, Item*);
		string getNombre();
		int getVida();
		void setVida(int);
		Item* getItem();
		void setItem(Item*);
		int getDefeated();
		void addDefeated();
		int getDinero();
		void setDinero(int);
		void useItem(Monstruo*);
		void resetEspecial();
		void setSelf(Heroe*);
		void aumentarMax();
		void restoreHP();
		int getMax();
		

		virtual int defensa() = 0;
		virtual void ataque(Monstruo*) = 0;
		virtual void atEsp(Monstruo*) = 0;

};

#endif
