#include "Interaccion.h"
#include "Bordes.h"
#include "Esfera.h"
#include "ListaLadrillos.h"
#include "Barra.h"
#include "ListaDisparos.h"
#include "Bonuses.h"
#include<iostream>
using namespace std;

Interaccion::Interaccion()
{
}

Interaccion::~Interaccion()
{
}

bool Interaccion:: rebote(Esfera &e,  Pared p) //ESFERA PAREDES
{
	Vector2D dir; 
	float dif = p.distancia(e.posicion, &dir) - e.radio;  
	if (dif <= 0.0f) 
	{
		Vector2D v_inicial = e.velocidad; 
 		e.velocidad = v_inicial - dir * 2.0*(v_inicial*dir); 
		e.posicion = e.posicion - dir * dif; 
		return true; 
	} 
	return false;
}

//AQUI ABAJO, CREO Q YA NOS SOBRA... 
void Interaccion::rebote(Esfera &e, Bordes b)	//ESFERA PAREDES
{
		Interaccion::rebote(e, b.pared_izq);
		Interaccion::rebote(e, b.techo);
		Interaccion::rebote(e, b.pared_dcha);
		Interaccion::rebote(e, b.suelo);
}

void Interaccion::rebote(ListaDisparos disparos, Bordes b)	//ESFERA PAREDES
{
	for(int i=0;i<disparos.numero;i++)
	{
		Interaccion::rebote(*(disparos[i]), b.pared_izq);
		Interaccion::rebote(*(disparos[i]), b.techo);
		Interaccion::rebote(*(disparos[i]), b.pared_dcha);
		Interaccion::rebote(*(disparos[i]), b.suelo);
	}
}

void Interaccion::rebote(Barra &b, Bordes c) //BARRA PAREDES		//CORREGIDA YA PARA NO TENER EN CUENTA EL SUELO
{
	float xmax = (c.pared_dcha.limite1.x)-(b.limite2.x-b.limite1.x); 
	float xmin = c.pared_izq.limite2.x; 
	if (b.posicion.x>xmax)b.posicion.x = xmax; 
	if (b.posicion.x<xmin)b.posicion.x = xmin;
}
		//todavia no funciona, 

bool Interaccion::rebote(Esfera &e, Barra &b)	//ESFERA BARRA****
{
	Vector2D dir;
	float lm,lM;
	int eje; //0-horizontal, 1-vertical
	for(int i=0;i<4;i++)
	{
	//funcion eje
	if(i==0 || i==2)
	eje = 0;
	else
	eje = 1;

	if(eje == 0)
	{
		float dif = b.distancia(e.posicion,i, &dir) - e.radio;
		lm = b.posicion.x;
		lM = b.posicion.x + (b.limite2.x-b.limite1.x);
		if((e.posicion.x>=lm) && (e.posicion.x<=lM) && (dif<=0.0f))
		{
		Vector2D v_inicial = e.velocidad; 
		e.velocidad = v_inicial - dir * 2.0*(v_inicial*dir); 
		e.posicion = e.posicion - dir * dif; 
		return true;
		}
	}

	if(eje == 1)
	{
		float dif = b.distancia(e.posicion,i, &dir) - e.radio;
		lm = b.posicion.y + (b.limite2.y-b.limite1.y);
		lM = b.posicion.y;
		if((e.posicion.y>=lm) && (e.posicion.y<=lM) && (dif<=0.0f))
		{
		Vector2D v_inicial = e.velocidad; 
		e.velocidad = v_inicial - dir * 2.0*(v_inicial*dir); 
		e.posicion = e.posicion - dir * dif; 
		return true;
		}
	}

	}
	return false;
}

bool Interaccion::rebote(Esfera &e, Barra &b, Jugador &player, int tipo, ListaDisparos &disparos)
{
	if(Interaccion::rebote((Esfera)e,b)==true)
	{
		switch (tipo){
		case 0/*VIDA*/:  player.vida+=1; cout<<"¡Has obtenido una vida!"<<endl; return true;
		case 1/*DISPARO*/: if(disparos.max<MAX_DISPAROS)disparos.max+=1;  cout<<"¡Has obtenido un disparo adicional!"<<endl; return true;
		case 2/*BARRA*/:  b.limite2.x+=5; cout<<"¡Tu barra ha sido mejorada!"<<endl;	return true;		//CUANDO ESTÉ HECHA LA COLISIÓN CON LA BARRA AQUÍ SE DEBERÁ DEFINIR CÓMO VARÍA ÉSTA AL RECOGER EL BONUS (alargarse por ejemplo)
		}
	}
	return false;
}

void Interaccion::rebote(ListaDisparos disparos, Barra &b)	//ESFERAS BARRA***
{
	for(int i=0;i<disparos.numero;i++)
	{
		Interaccion::rebote(*(disparos[i]), b);
	}
}


void Interaccion::rebote(Esfera &e, ListaLadrillos lista)
{
	for(int i=0;i<lista.getNumero();i++)
		Interaccion::rebote(e,*(lista[i]));
}

int Interaccion::rebote(ListaDisparos disparos, ListaLadrillos lista, bool &k)
{
	for(int i=0;i<disparos.numero;i++){
			for(int j=0;j<lista.getNumero();j++)
				if(Interaccion::rebote(*(disparos[i]),*(lista[j]))) 
				{
					lista[j]->golpeado();
					if(lista[j]->getGolpes()==0){
					if(lista[j]->daBonus())k=true;
					lista.eliminar(lista[j]);
					return i;}
				}
	}
	return -1;
}