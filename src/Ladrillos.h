#pragma once
#include "Barra.h"

class Ladrillos:public Barra
{
protected:
	int golpes;
public:
	Ladrillos(void);
	Ladrillos(float x1,float y1,float x2,float y2);
	virtual ~Ladrillos(void);

	virtual int getGolpes(){return golpes;}
	virtual void golpeado(){golpes--;}
};

