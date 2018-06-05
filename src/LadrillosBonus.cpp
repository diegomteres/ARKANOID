#include "LadrillosBonus.h"
#include <stdlib.h>
#include<time.h>
#include"glut.h"


LadrillosBonus::LadrillosBonus(float x1,float y1,float x2,float y2):Ladrillos(x1,y1,x2,y2)
{
	srand(time(NULL));
	SetColor( rand()/(float)RAND_MAX,rand()/(float)RAND_MAX,rand()/(float)RAND_MAX);
	golpes=3;
}


LadrillosBonus::~LadrillosBonus(void)
{
}

