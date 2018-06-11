#pragma once

#define MAX_BONUS 3
#include "Bonus.h"
#include "Barra.h"
#include"BonusBarra.h"
#include"BonusDisparo.h"
#include"BonusVida.h"

class Bonuses 
{
public:
	Bonuses();
	virtual ~Bonuses();
	
	void inicializa(void);
	bool agregar(Bonus* d);
	void destruirContenido();
	void destruirBonus(int i);
	void mueve(float t);
	void dibuja();

	int numero;
	Bonus* operator[] (int index);
private:
	Bonus* lista[MAX_BONUS];
	
};
