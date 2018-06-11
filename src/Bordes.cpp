#pragma once
#include "Bordes.h"
#include "ETSIDI.h"
Bordes::Bordes(void)
{
	pared_izq.SetColor(150,150,150);
	pared_izq.SetPos(2.0f,0.0f,3.0f,97.0f);

	techo.SetColor(150,150,150);
	techo.SetPos(2.0f,97.0f,98.0f,98.0f);

	pared_dcha.SetColor(150,150,150);
	pared_dcha.SetPos(97.0f,98.0f,98.0f,0.0f);

	suelo.SetColor(150,150,150);
	suelo.SetPos(0.0f,0.0f,98.0f,0.0f);
}


Bordes::~Bordes(void)
{
}

void Bordes::dibuja()
{
	pared_izq.dibuja();
	techo.dibuja();
	pared_dcha.dibuja();
	//dibujo del fondo
	glEnable(GL_TEXTURE_2D);
  
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/652809.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	
	glTexCoord2d(0,1);		glVertex3f(0,0,-0.1);
	glTexCoord2d(1,1);		glVertex3f(100,0,-0.1);
	glTexCoord2d(1,0);		glVertex3f(100,100,-0.1);
	glTexCoord2d(0,0);		glVertex3f(0,100,-0.1);
	glEnd();


	glDisable(GL_TEXTURE_2D);
}
