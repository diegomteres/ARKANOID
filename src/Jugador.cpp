#include "Jugador.h"
#include "glut.h"

Jugador::Jugador(void)
{
	inicializa();
}


Jugador::~Jugador(void)
{
}

void Jugador::inicializa(void)
{
		vida=3;
	gameover=false;
}

void Jugador::vidas(int v)
{
	char vidas[] = "VIDAS:";
	int a=0;
	char valor=v+'0';

	glColor3ub(255,50,50);
	for(int i=0;vidas[i]!='\0';i++)
	{
	glRasterPos3i(4+a,95,1);
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13,vidas[i]);
	a+=2;
	}
	glRasterPos3i(4+a,95,1);
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13,valor);
}

/*
void Jugador::gameover(void)
{

}
*/