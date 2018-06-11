#include "Bonus.h"
#include <stdlib.h>
//#include<time.h>
#include"glut.h"

Bonus::Bonus(void)
{
//	char *f1="imagenes/Corazon.png", *f2="imagenes/Disparo.png", *f3="imagenes/Barra.png", *f4;
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
	
//	srand(time(NULL));
//	int i=rand()%3; //AL HACER EL MÓDULO OBTENEMOS SIEMPRE UN NÚMERO ENTRE 0 Y 2, GENERA ALEATORIAMENTE EL TIPO DE BONUS
/*	switch (i){
		case 0: tipo=VIDA; f4=f1; break;
		case 1: tipo=DISPARO; f4=f2; break;	
		case 2: tipo=BARRA; f4=f3; break;
	}
*/
/*
	sprite = new Sprite(f4);
	sprite->setPos(posicion.x-radio,posicion.y-radio);
	sprite->setCenter(posicion.x,posicion.y);
	sprite->setSize(5,5);
*/
}


Bonus::~Bonus(void)
{
}

void Bonus::dibuja() 
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f(1.0f, 1.0f, 1.0f);
	sprite->draw();
	glPopMatrix();
}

int Bonus::getTipo(){
	return tipo;
}