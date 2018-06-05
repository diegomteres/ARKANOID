#pragma once
#include"Ladrillos.h" //APLICAR POLIMORFISMO
#include"LadrillosBonus.h"

#define MAX_LADRILLOS 100

class ListaLadrillos
{
public:
	ListaLadrillos(void);
	~ListaLadrillos(void);
	void dibuja();
	Ladrillos* operator[] (int index);
	bool agregar(Ladrillos *e);
	void eliminar(Ladrillos *e);
	void eliminar(int index);
	void inicializa(void);
	int getNumero(void){return numero;}

private:
	Ladrillos * lista[MAX_LADRILLOS];
	int numero;
};

