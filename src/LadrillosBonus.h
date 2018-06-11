#pragma once
#include "Ladrillos.h"

class LadrillosBonus:public Ladrillos
{
public:
	LadrillosBonus(float x1,float y1,float x2,float y2, int i=3);
	~LadrillosBonus(void);

	bool daBonus(){return true;}		//polimorfismo
	void dibuja();
};

