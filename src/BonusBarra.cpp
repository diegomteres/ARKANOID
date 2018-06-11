#include "BonusBarra.h"


BonusBarra::BonusBarra():sprite("imagenes/Barra.png")
{
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
	sprite.setPos(posicion.x-radio,posicion.y-radio);
	sprite.setCenter(posicion.x,posicion.y);
	sprite.setSize(5,5);
}


BonusBarra::~BonusBarra(void)
{
}

ostream& BonusBarra::imprime(ostream & o)
{
	Bonus::imprime(o);
	cout<<"Tu barra ha sido mejorada!"<<endl;
	return o;
}

void BonusBarra::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f(1.0f, 1.0f, 1.0f);
	sprite.draw();
	glPopMatrix();
}
