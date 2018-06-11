#pragma once
#include "Bonus.h"
#include<iostream>
using namespace std;
#include"ETSIDI.h"
using ETSIDI::Sprite;


class BonusBarra:public Bonus
{
	Sprite sprite;
public:
	BonusBarra(void);
	~BonusBarra(void);

	int getTipo(){return 2;}
	ostream& imprime(ostream & o);
	void dibuja();
};

