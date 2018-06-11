#include "BonusDisparo.h"


BonusDisparo::BonusDisparo():sprite("imagenes/Disparo.png")
{
	SetRadio(1.5f);
	setVel(0.0f,-1.0f);
	sprite.setPos(posicion.x-radio,posicion.y-radio);
	sprite.setCenter(posicion.x,posicion.y);
	sprite.setSize(5,5);
}


BonusDisparo::~BonusDisparo(void)
{
}

ostream& BonusDisparo::imprime(ostream & o)
{
	Bonus::imprime(o);
	cout<<"Has obtenido un disparo adicional!"<<endl;
	return o;
}

void BonusDisparo::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f(1.0f, 1.0f, 1.0f);
	sprite.draw();
	glPopMatrix();
}
