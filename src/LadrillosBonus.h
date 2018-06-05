#pragma once
#include "Ladrillos.h"

class LadrillosBonus:public Ladrillos
{
public:
	LadrillosBonus(float x1,float y1,float x2,float y2);
	~LadrillosBonus(void);
	
	int getGolpes(){return golpes;}
	void golpeado(){golpes--;}
};

