#pragma once
#include"ETSIDI.h"
#include "Esfera.h"
using ETSIDI::Sprite;

class Bonus:public Esfera
{
	enum Tipo {VIDA=0, DISPARO=1, BARRA=2};  
	Tipo tipo;
	Sprite *sprite;

public:
	friend class Interaccion;

	int getTipo();
	Bonus(void);
	~Bonus(void);
	void dibuja(void);
};

