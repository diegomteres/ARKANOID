#include "Esfera.h"
#include "glut.h"

Esfera::Esfera(void)
{
	SetColor(255,40,40);
	SetPos(50.0f,5.0f);
	SetRadio(1.0f);
	setVel(16.0f,37.5f);
}

Esfera::~Esfera(void)
{
}

void Esfera::dibuja()
{
	glColor3ub(rojo,verde,azul);
	glTranslatef(posicion.x,posicion.y,0);
	glutSolidSphere(radio, 100, 100);
	glTranslatef(-posicion.x,-posicion.y,0);
}

void Esfera::SetRadio(float rad)
{
	radio=rad;
}
