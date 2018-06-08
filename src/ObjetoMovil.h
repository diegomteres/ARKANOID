#pragma once
#include "Objeto.h"

class ObjetoMovil:public Objeto
{
	public:
	Vector velocidad;
	Vector aceleracion;

	void Mover(float);
	void setVel(float, float);
	void setAceleracion(float,float);
	ObjetoMovil(void);
	virtual ~ObjetoMovil(void);
};