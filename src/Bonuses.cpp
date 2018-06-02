#include "Bonuses.h"
#include "Interaccion.h"

Bonuses::Bonuses()
{
	inicializa();
}

Bonuses::~Bonuses()
{

}

void Bonuses::inicializa()
{
	numero=0;
	for(int i=0;i<MAX_BONUS;i++)lista[i]=0;
}

void Bonuses::dibuja()
{
	for(int i=0;i<numero;i++)
		lista[i]->dibuja();
}

void Bonuses::mueve(float t)
{
	for(int i=0;i<numero;i++)
		lista[i]->Mover(t);
}

void Bonuses::destruirContenido()
{
	for(int i=0;i<numero;i++)
		delete lista[i];

	numero=0;
}

void Bonuses::destruirBonus(int index)
{
		if((index<0)||(index>=numero))
		return;
	
	delete lista[index];

	numero--;
	for(int i=index;i<=numero;i++)
		lista[i]=lista[i+1];
}

bool Bonuses::agregar(Bonus *d)
{
	for(int i=0;i<numero;i++)//para evitar que se añada una esfera ya existente
		if(lista[i]==d)
			return false;

	if(numero<MAX_BONUS)
	   lista[numero++]=d;
	else 
		return false;
	return true;
}

Bonus *Bonuses::operator [](int i)
{
	if(i>=numero)
		i=numero-1;
	if(i<0)
		i=0;
	
	return lista[i];
}

