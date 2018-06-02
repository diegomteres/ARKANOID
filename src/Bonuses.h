#pragma once

#define MAX_BONUS 1
#include "Bonus.h"
#include "Barra.h"

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
