#include "Ladrillos.h"


Ladrillos::Ladrillos(void)
{
}

Ladrillos::Ladrillos(float x1,float y1,float x2,float y2, int i)
{
	golpes=i;
	SetPos(x1,y1,x2,y2);
}

Ladrillos::~Ladrillos(void)
{
}
