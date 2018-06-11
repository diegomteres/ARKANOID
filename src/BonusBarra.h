#pragma once
#include "Bonus.h"
#include<iostream>
using namespace std;
#include"ETSIDI.h"
using ETSIDI::Sprite;


class BonusBarra:public Bonus
{
public:
	BonusBarra(void);
	~BonusBarra(void);

	void imprime();
};

