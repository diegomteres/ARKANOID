#include "Bonus.h"
#include <stdlib.h>
#include<time.h>
#include"glut.h"


Bonus::Bonus(void)
{
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
	
	srand(time(NULL));
	int i=rand()%3; //AL HACER EL MÓDULO OBTENEMOS SIEMPRE UN NÚMERO ENTRE 0 Y 2
	switch (i){
		case 0: tipo=VIDA; break;
		case 1: tipo=DISPARO; break;	//GENERA ALEATORIAMENTE EL TIPO DE BONUS
		case 2: tipo=BARRA; break;
	}

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

int Bonus::getTipo(){
	return tipo;
}