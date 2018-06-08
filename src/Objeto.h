#pragma once
#include "Vector.h"

class Objeto
{
public:
	Vector posicion;
	Vector limite1;  
	Vector limite2;
	unsigned char rojo;
	unsigned char azul;
	unsigned char verde;

	Objeto(void);
	virtual void dibuja(void)=0;
	virtual ~Objeto(void);
	void SetPos(float,float);
	void SetPos(float,float,float,float);
	void SetColor(unsigned char, unsigned char, unsigned char);
	Vector GetPos(void);
};
