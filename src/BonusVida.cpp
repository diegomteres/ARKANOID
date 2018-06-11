#include "BonusVida.h"


BonusVida::BonusVida():Bonus()
{
	*sprite=("imagenes/Corazon.png");
	sprite->setPos(posicion.x-radio,posicion.y-radio);
	sprite->setCenter(posicion.x,posicion.y);
	sprite->setSize(5,5);
}


BonusVida::~BonusVida(void)
{
}

void BonusVida::imprime()
{
	Bonus::imprime();
	cout<<"Tienes una vida mas!"<<endl;
}
