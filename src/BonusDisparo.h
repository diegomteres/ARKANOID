#pragma once
#include "Bonus.h"
#include<iostream>
using namespace std;
#include"ETSIDI.h"
using ETSIDI::Sprite;


class BonusDisparo:public Bonus
{
	Sprite sprite;
public:
	BonusDisparo(void);
	~BonusDisparo(void);
	
	int getTipo(){return 1;}
	ostream& imprime(ostream& o);
	void dibuja();
};

