#include <iostream>
#include <string>
#include "Monstruo.h"
#include "Heroe.h"
#include "Joven.h"
#include "Adulto.h"
#include "Item.h"
#include "Bomba.h"
#include "Bumeran.h"
#include "Flechas.h"
#include "Jefe.h"
#include "Subjefe.h"
#include "Comun.h"
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

int menu();
Monstruo* crearMonst();
void Pelear(Heroe*, Monstruo*);

int main(){
	int dinero, derrotados, vida, max_vida;
	bool seguir = true;
	vector<Monstruo*> monsters;
	Heroe* h;
	string color;
	string nombre;
	cout<<"Ingrese su nombre:"<<endl;
	cin>>nombre;
	h = new Joven(nombre, 12, 0, 2000, 12, new Bumeran("Boom", "Cafe"));
	h->setSelf(h);
	Item* item;
	int op = 0;
	while(seguir){
		switch(menu()){
			case 1:
				monsters.push_back(crearMonst());
				break;
			case 2:
				op = 0;
				if(monsters.size()>0){
					cout<<"Elija un item"<<endl
						<<"1)Bumeran"<<endl
						<<"2)Flechas"<<endl
						<<"3)Bombas"<<endl;
					while (op<1 || op > 3){
						cin>>op;
					}
					cout<<"Nombre del Item:"<<endl;
					cin>>nombre;
					cout<<"Color del Item:"<<endl;
					cin>>color;
					switch(op){
						case 1:
							item = new Bumeran(nombre, color);
							break;
						case 2:
							item = new Flechas(nombre, color);
							break;
						case 3:
							item = new Bomba(nombre, color);
							break;
					}
					h->setItem(item);
					op = -1;
					cout<<"Lista de monstruos:"<<endl;
					for (int i=0;i < monsters.size(); i++){
						cout<<i<<")"<<monsters.at(i)->getNombre();
						if (typeid(*monsters.at(i))==typeid(Jefe)){
							cout<<"- Jefe"<<endl;
						}else if(typeid(*monsters.at(i))==typeid(Subjefe)){
							cout<<"- Subjefe"<<endl;
						}else{
							cout<<"- Comun"<<endl;
						}

					}
					while(op<0 || op >= monsters.size()){
						cin>>op;
					}
					Pelear(h, monsters.at(op));
				}else{
					cout<<"No hay monstruos"<<endl;
				}	
				break;
			case 3:
				cout<<"Fondos: "<<h->getDinero()<<endl;
				cout<<"Desea comprar un corazon por $200?"<<endl;
				cout<<"1) si 2) no"<<endl;
				op = 0;
				while (op!= 1 && op != 2){
					cin>>op;
				}
				if (op == 1){
					if (h->getDinero()>=200){
						h->setDinero(-200);
						h->aumentarMax();
						h->restoreHP();
					}else{
						cout<<"Fondos insuficientes!"<<endl;
					}
				}
				break;
			case 4: 
				if (h->getDefeated()>=3){
					dinero=h->getDinero();
					derrotados=h->getDefeated();
					vida=h->getVida();
					max_vida=h->getMax();
					nombre=	h->getNombre();
					item = h->getItem();
					if(typeid(*h) == typeid(Joven)){
						h = new Adulto(nombre, vida, derrotados, dinero, max_vida, item);
						cout<<"Eres Adulto!"<<endl;
					}else{
						cout<<"Eres Joven!"<<endl;
						h = new Joven(nombre, vida, derrotados, dinero, max_vida, item);
					}
					h->setSelf(h);
					
				}else{
					cout<<"No se han derrotado 3 jefes aun"<<endl;
				}	
				break;
			case 5:
				break;
			case 6:
				if(monsters.size()>0){
					cout<<"Monstruos: "<<endl;
					for (int i=0;i < monsters.size(); i++){
						cout<<i<<")"<<monsters.at(i)->getNombre()<<endl;
					}
					while(op<0 || op > monsters.size()){
						cin>>op;
					}
					if(op < monsters.size()){
						monsters.erase(monsters.begin()+op);
					}

				}else{
					cout<<"No hay monstruos en la lista"<<endl;
				}
				break;
			case 7:
				cout<<"Salir"<<endl;
				seguir = false;
				break;
		}
	
	}
	return 0;
}
void Pelear(Heroe* heroe, Monstruo* monst){
	int turno =0;
	cout<<"Se ha iniciado una batalla"<<endl;
	srand(time(NULL));
	int att_bot=0;
	bool seguir= true;
	while (heroe->getVida() > 0 && monst->getVida()>0 && seguir){
		if (turno%2==0){
			cout<<"Jugador HP: "<< heroe->getVida()<<endl
				<<"Enemigo HP: "<< monst->getVida()<<endl;
			cout<<"1)Atacar"<<endl
				<<"2)Ataque especial"<<endl
				<<"3)Usar Item"<<endl
				<<"4)Huir"<<endl;
			int opcion =0;
			while (opcion < 1 || opcion > 4){
				cin>>opcion;
			}
			switch(opcion){
				case 1:
					heroe->ataque(monst);
					break;
				case 2:
					heroe->atEsp(monst);
					break;
				case 3:
					heroe->useItem(monst);
					break;
				case 4:
					seguir = false;
					break;
			}
		}else{
		att_bot = rand()%3 + 1;
	 		if(att_bot == 1){
				monst->ataque(heroe);
			}		
		}
		turno++;
	}
	if (monst->getVida() <= 0){
		cout<<"Derrotaste al monstruo!"<<endl;
		monst->derrotado(heroe);
	}else{
		cout<<"Has perdido!"<<endl;
	}
	monst->restoreHP();
	heroe->restoreHP();
}

Monstruo* crearMonst(){
	Monstruo* monst;
	cout<<"Elija el nombre"<<endl;
	string name;
	cin>>name;
	cout<<"Elija la debilidad"<<endl;
	cout<<"1)Bumeran"<<endl
		<<"2)Flechas"<<endl
		<<"3)Bombas"<<endl;
	int deb =0;
	while (deb < 1 || deb >> 3){
		cin>>deb;
	}
	cout<<"Tipo"<<endl
		<<"1)Jefe"<<endl
		<<"2)Subjefe"<<endl
		<<"3)Comun"<<endl;
	int tipo =0;
	while (tipo<1 || tipo >3){
		cin>>tipo;
	}
	switch(tipo){
		case 1:
			monst = new Jefe(name, 2, 9, deb);
			break;
		case 2:
			monst = new Subjefe(name, 1, 7, deb);
			break;
		case 3:
			monst = new Comun(name, 0, 5, deb);
			break;
	}
	return monst;
}

int menu(){
	int op;
	cout<<"Menu:"<<endl
		<<"1)Crear Monstruo"<<endl
		<<"2)Pelear"<<endl
		<<"3)Tienda"<<endl
		<<"4)Sacar/Guarda Espada"<<endl
		<<"5)Guardar Sesion"<<endl
		<<"6)Eliminar"<<endl
		<<"7)Salir"<<endl;
	cin>>op;
	return op;

}
