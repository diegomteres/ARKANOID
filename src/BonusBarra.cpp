#include "BonusBarra.h"


BonusBarra::BonusBarra():Bonus()
{
	*sprite=("imagenes/Barra.png");
	sprite->setPos(posicion.x-radio,posicion.y-radio);
	sprite->setCenter(posicion.x,posicion.y);
	sprite->setSize(5,5);
}


BonusBarra::~BonusBarra(void)
{
}

void BonusBarra::imprime()
{
	Bonus::imprime();
	cout<<"Tu barra ha sido mejorada!"<<endl;
}

