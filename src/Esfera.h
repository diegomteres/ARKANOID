#pragma once
#include "Vector2D.h"
#include "ObjetoMovil.h"

class Esfera:public ObjetoMovil
{
public:
	friend class Interaccion;

	Esfera(void);
	virtual ~Esfera(void);
	void dibuja();
	void SetRadio(float);


protected:		//PONGO EL RADIO PREOTECTED PARA QUE BONUS LO HEREDE COM ATRIBUTO PROPIO PRIVADO

	float radio;
};


