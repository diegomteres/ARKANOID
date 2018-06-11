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

void LadrillosBonus::dibuja(){
	Barra::dibuja();
	float rangox,rangoy;
	rangox = limite2.x-limite1.x;
	rangoy = limite2.y-limite1.y;
	glTranslatef((posicion.x+rangox/2),(posicion.y+rangoy/2), 1);
	glColor3ub(0,0,0);
	glutSolidTorus(0.5,1,20,20);
	glTranslatef(-(posicion.x+rangox/2),-(posicion.y+rangoy/2),- 1);

}