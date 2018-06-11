#include "BonusDisparo.h"


BonusDisparo::BonusDisparo():Bonus()
{
	*sprite=("imagenes/Disparo.png");
	sprite->setPos(posicion.x-radio,posicion.y-radio);
	sprite->setCenter(posicion.x,posicion.y);
	sprite->setSize(5,5);
}


BonusDisparo::~BonusDisparo(void)
{
}

void BonusDisparo::imprime()
{
	Bonus::imprime();
	cout<<"Has obtenido un disparo adicional!"<<endl;
}
