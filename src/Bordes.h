#pragma once
#include "Pared.h"

class Bordes
{
public:
	friend class Interaccion;

	Bordes(void);
	virtual ~Bordes(void);
	void dibuja();
	Pared getSuelo(){return suelo;};

private:
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;
	Pared suelo;
};

