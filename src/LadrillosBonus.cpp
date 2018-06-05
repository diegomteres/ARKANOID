#include "LadrillosBonus.h"
#include <stdlib.h>
#include<time.h>
#include"glut.h"


LadrillosBonus::LadrillosBonus(float x1,float y1,float x2,float y2,int i):Ladrillos(x1,y1,x2,y2,i)
{
	SetColor(255,255,255);
}


LadrillosBonus::~LadrillosBonus(void)
{
}
