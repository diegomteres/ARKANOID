#pragma once
#include "Bonus.h"
#include<iostream>
using namespace std;
#include"ETSIDI.h"
using ETSIDI::Sprite;

class BonusVida:public Bonus
{
	Sprite sprite;
public:
	BonusVida(void);
	~BonusVida(void);

	ostream& imprime(ostream& o);
	void dibuja();
};

