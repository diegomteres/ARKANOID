#include "ListaLadrillos.h"
#include"Ladrillos.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#define MAX 30

using namespace std;

typedef struct
{
	float pos_lad[4];
	int col_lad[3];
//	int dis_lad;
}NIVEL; 

ListaLadrillos::ListaLadrillos(void)
{
	inicializa();
}

ListaLadrillos::~ListaLadrillos(void)
{
}

void ListaLadrillos::inicializa(int j)
{
	for(int i=0;i<MAX_LADRILLOS;i++)lista[i]=0;
	numero=0;

	ifstream f;
	NIVEL lad_nivel[20];
	int i=0;
	LadrillosBonus *lb[MAX];
	Ladrillos *l[MAX];

	if(j==1)
	{
	f.open("NIVEL1.txt");
	if(!f){cout<<"ERROR"<<endl;}
	while(!f.eof())
	{
	f>>lad_nivel[i].pos_lad[0]>>lad_nivel[i].pos_lad[1]>>lad_nivel[i].pos_lad[2]>>lad_nivel[i].pos_lad[3];
	f>>lad_nivel[i].col_lad[0]>>lad_nivel[i].col_lad[1]>>lad_nivel[i].col_lad[2];
//	cout<<lad_nivel[i].pos_lad[0]<<lad_nivel[i].pos_lad[1]<<lad_nivel[i].pos_lad[2]<<lad_nivel[i].pos_lad[3]<<endl;
//	cout<<lad_nivel[i].col_lad[0]<<lad_nivel[i].col_lad[1]<<lad_nivel[i].col_lad[2]<<endl;
	i++;
	}
	f.close();
	n_de_ladrillos=i;
	for(int j=0;j<i;j++)
	{
		lb[j]=new LadrillosBonus(lad_nivel[j].pos_lad[0],lad_nivel[j].pos_lad[1],lad_nivel[j].pos_lad[2],lad_nivel[j].pos_lad[3]);
		agregar(lb[j]);
		j++;
		l[j]=new Ladrillos(lad_nivel[j].pos_lad[0],lad_nivel[j].pos_lad[1],lad_nivel[j].pos_lad[2],lad_nivel[j].pos_lad[3]);
		l[j]->SetColor(lad_nivel[j].col_lad[0],lad_nivel[j].col_lad[1],lad_nivel[j].col_lad[2]);
		agregar(l[j]);
	}
	}
	if(j==2)
	{
	f.open("NIVEL2.txt");
	if(!f){cout<<"ERROR"<<endl;}
	while(!f.eof())
	{
	f>>lad_nivel[i].pos_lad[0]>>lad_nivel[i].pos_lad[1]>>lad_nivel[i].pos_lad[2]>>lad_nivel[i].pos_lad[3];
	f>>lad_nivel[i].col_lad[0]>>lad_nivel[i].col_lad[1]>>lad_nivel[i].col_lad[2];
//	cout<<lad_nivel[i].pos_lad[0]<<lad_nivel[i].pos_lad[1]<<lad_nivel[i].pos_lad[2]<<lad_nivel[i].pos_lad[3]<<endl;
//	cout<<lad_nivel[i].col_lad[0]<<lad_nivel[i].col_lad[1]<<lad_nivel[i].col_lad[2]<<endl;
	i++;
	}
	f.close();
	n_de_ladrillos=i;
	for(int j=0;j<i;j++)
	{
		lb[j]=new LadrillosBonus(lad_nivel[j].pos_lad[0],lad_nivel[j].pos_lad[1],lad_nivel[j].pos_lad[2],lad_nivel[j].pos_lad[3]);
		agregar(lb[j]);
		j++;
		l[j]=new Ladrillos(lad_nivel[j].pos_lad[0],lad_nivel[j].pos_lad[1],lad_nivel[j].pos_lad[2],lad_nivel[j].pos_lad[3]);
		l[j]->SetColor(lad_nivel[j].col_lad[0],lad_nivel[j].col_lad[1],lad_nivel[j].col_lad[3]);
		agregar(l[j]);
	}
	}

}

void ListaLadrillos::dibuja()
{
	for(int i=0;i<numero;i++)
		lista[i]->dibuja();
}

Ladrillos *ListaLadrillos::operator [](int i)
{
	if(i>numero)
		i=numero-1;
	if(i<0)
		i=0;
	
	return lista[i];
}

bool ListaLadrillos::agregar(Ladrillos *e)
{
	for(int i=0;i<numero;i++)//para evitar que se añada un ladrillo ya existente
		if(lista[i]==e)
			return false;

	if(numero<MAX_LADRILLOS)
	   lista[numero++]=e;
	else 
		return false;
	return true;
}

void ListaLadrillos::eliminar(int index)
{
	if((index<0)||(index>numero))
		return;
	
	delete lista[index]; 

	numero--;
	for(int i=index;i<numero;i++)
		lista[i]=lista[i+1];
}

void ListaLadrillos::eliminar(Ladrillos *e)
{
	for(int i=0;i<numero;i++)
	if(lista[i]==e)
	{
	eliminar(i);
	return;
	}
}
