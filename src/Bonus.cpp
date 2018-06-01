#include "Bonus.h"
#include <stdlib.h>
#include"glut.h"


Bonus::Bonus(void)
{
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
}


Bonus::~Bonus(void)
{
}

void Bonus::dibuja() 
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f( rand()/(float)RAND_MAX,rand()/(float)RAND_MAX,rand()/(float)RAND_MAX);//color aleatorio 
	glutSolidSphere(radio,100,100);
	glTranslatef(-posicion.x,-posicion.y,0);

}