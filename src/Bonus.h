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

public:
	friend class Interaccion;

	virtual int getTipo();
	Bonus(void);
	~Bonus(void);
	virtual void dibuja(void)=0;
	virtual ostream& imprime(ostream& o){o<<"bonus"; return o;}
};

