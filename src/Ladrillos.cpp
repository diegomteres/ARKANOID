#include "Ladrillos.h"


Ladrillos::Ladrillos(void)
{
}

Ladrillos::Ladrillos(float x1,float y1,float x2,float y2, int i, int r, int g, int b)
{
	golpes=i;
	SetPos(x1,y1,x2,y2);
	SetColor(r,g,b);
}

Ladrillos::~Ladrillos(void)
{
}
