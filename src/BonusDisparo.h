#pragma once
#include "Bonus.h"
#include<iostream>
using namespace std;
#include"ETSIDI.h"
using ETSIDI::Sprite;


class BonusDisparo:public Bonus
{
public:
	BonusDisparo(void);
	~BonusDisparo(void);

	void imprime();
};

