
#include <string>

#ifndef MONSTRUO_H
#define MONSTRUO_H

using namespace std;
class Heroe;
class Monstruo{

	protected:
		string nombre;
		int vida;
		int att;
		int def;
		int debilidad;

	public:
		Monstruo(string, int,int ,int, int);
		string getNombre();
		int getVida();
		void setVida(int);
		int defensa();
		void ataque(Heroe*);
		void newHP(int);
		virtual void derrotado(Heroe*) = 0;

};

#endif

