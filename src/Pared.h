#pragma once
#include "Vector.h"
#include "Objeto.h"
class Pared:public Objeto
{
public:
	Pared(void);
	virtual ~Pared(void);
	float distancia(Vector punto, Vector *direccion=0);

	void dibuja();
};


