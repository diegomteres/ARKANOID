#include "BonusVida.h"


BonusVida::BonusVida():sprite("imagenes/Corazon.png")
{
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
	sprite.setPos(posicion.x-radio,posicion.y-radio);
	sprite.setCenter(posicion.x,posicion.y);
	sprite.setSize(5,5);
}


BonusVida::~BonusVida(void)
{
}

ostream& BonusVida::imprime(ostream &o)
{
	Bonus::imprime(o);
	o<<"Tienes una vida mas!"<<endl;
	return o;
}

void BonusVida::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f(1.0f, 1.0f, 1.0f);
	sprite.draw();
	glPopMatrix();
}

