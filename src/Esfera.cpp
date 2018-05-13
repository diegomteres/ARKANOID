#include "Esfera.h"
#include "glut.h"

Esfera::Esfera(void)
{
}

Esfera::~Esfera(void)
{
}

void Esfera::Dibuja()
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
