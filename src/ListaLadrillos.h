#pragma once
#include"Ladrillos.h" //APLICAR POLIMORFISMO
#include"LadrillosBonus.h"
#include <fstream>
#include <iostream>
#define MAX_LADRILLOS 100

class ListaLadrillos
{
	int n_de_ladrillos;	//PARA CONTAR CUANDO ELIMINAS TODOS LOS LADRILLOS  Y GANAR
public:					//POR AHORA CUENTA TODOS LOS LADRILLOS QUE SACA DEL FICHERO
	ListaLadrillos(void);
	~ListaLadrillos(void);
	void dibuja();
	Ladrillos* operator[] (int index);
	bool agregar(Ladrillos *e);
	void eliminar(Ladrillos *e);
	void eliminar(int index);
	void inicializa(int i=2);
	int getNumero(void){return numero;}
	int getN_lad(void){return n_de_ladrillos;}

private:
	Ladrillos * lista[MAX_LADRILLOS];
	int numero;
};

