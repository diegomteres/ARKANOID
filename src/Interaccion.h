#include "Bordes.h"
#include "Esfera.h"
#include "Barra.h"

#pragma once
class Interaccion
{
public:
	Interaccion();
	virtual ~Interaccion();
	static bool rebote(Esfera &e,  Pared p);
	static void rebote(Esfera &e, Bordes b);
	static void rebote(Barra &b, Bordes c);
	static void rebote(Esfera &e, Barra &b);
};
