#pragma once

#include "Esfera.h"

class Bonus:public Esfera
{
public:
	friend class Interaccion;

	Bonus(void);
	~Bonus(void);
	void dibuja(void);
};

