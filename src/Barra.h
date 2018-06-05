#pragma once
#include "ObjetoMovil.h"

class Barra:public ObjetoMovil
{
public:
/*	Vector2D derecha[2];
	Vector2D izquierda[2];
	Vector2D arriba[2];
	Vector2D abajo[2];
	*/
	friend class Interaccion;

	//void act_lados();
	float distancia(Vector2D punto, int i,Vector2D *direccion=0);
	float *getLado(int);
	Barra(void);
	virtual ~Barra(void);

	void Dibuja(void);
};

