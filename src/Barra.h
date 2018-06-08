#pragma once
#include "ObjetoMovil.h"

class Barra:public ObjetoMovil
{
public:
/*	Vector derecha[2];
	Vector izquierda[2];
	Vector arriba[2];
	Vector abajo[2];
	*/
	friend class Interaccion;

	//void act_lados();
	float distancia(Vector punto, int i,Vector *direccion=0);
	float *getLado(int);
	Barra(void);
	virtual ~Barra(void);

	void dibuja(void);
};

