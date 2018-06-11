#pragma once
#include"ETSIDI.h"
#include "Esfera.h"
using ETSIDI::Sprite;
#include<iostream>
using namespace std;

class Bonus:public Esfera
{
protected:
	enum Tipo {VIDA=0, DISPARO=1, BARRA=2};  
	Tipo tipo;
	Sprite *sprite;

public:
	friend class Interaccion;

	virtual int getTipo();
	Bonus(void);
	~Bonus(void);
	void dibuja(void);
	virtual void imprime(){cout<<"bonus";};
};

