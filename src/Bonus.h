#pragma once

#include "Esfera.h"

class Bonus:public Esfera
{
	enum Tipo {VIDA=0, DISPARO=1, BARRA=2};  
	Tipo tipo;

public:
	friend class Interaccion;

	int getTipo();
	Bonus(void);
	~Bonus(void);
	void dibuja(void);
};

