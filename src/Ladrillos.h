#pragma once
#include "Barra.h"

class Ladrillos:public Barra
{
protected:
	int golpes;
public:
	Ladrillos(void);
	Ladrillos(float x1,float y1,float x2,float y2,int i=1);
	virtual ~Ladrillos(void);

	int getGolpes(){return golpes;}
	void golpeado(){golpes--;}
	virtual bool daBonus(){return false;}
};

