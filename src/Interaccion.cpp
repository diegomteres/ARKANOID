#include "Interaccion.h"
#include "Bordes.h"
#include "Esfera.h"


Interaccion::Interaccion()
{
}


Interaccion::~Interaccion()
{
}

bool Interaccion:: rebote(Esfera &e,  Pared p)
{
	Vector2D dir; 
	float dif = p.distancia(e.posicion, &dir) - e.radio;  
	if (dif <= 0.0f) 
	{
		Vector2D v_inicial = e.velocidad; 
		e.velocidad = v_inicial - dir * 2.0*(v_inicial*dir); 
		e.posicion = e.posicion - dir * dif; 
		return true; 
	} 
	return false;
}


void Interaccion::rebote(Esfera &e, Bordes b)
{
		Interaccion::rebote(e, b.pared_izq);
		Interaccion::rebote(e, b.techo);
		Interaccion::rebote(e, b.pared_dcha);
		Interaccion::rebote(e, b.suelo);
}

void Interaccion::rebote(Barra &b, Bordes c) //CORREGIDA YA PARA NO TENER EN CUENTA EL SUELO
{
	float xmax = (c.pared_dcha.limite1.x)-10; 
	float xmin = c.pared_izq.limite2.x; 
	if (b.posicion.x>xmax)b.posicion.x = xmax; 
	if (b.posicion.x<xmin)b.posicion.x = xmin;
}
		//todavia no funciona, 
void Interaccion::rebote(Esfera &e, Barra &b)
{
	Vector2D dir;
	float dif = b.distancia(e.posicion, &dir) - e.radio; ;
	float li = b.posicion.x;
	float ld = b.posicion.x+(b.limite2.x-b.limite1.x);
	if((e.posicion.x>=li) && (e.posicion.x<=ld) && (dif<=0.0f))
	{
		Vector2D v_inicial = e.velocidad; 
		e.velocidad = v_inicial - dir * 2.0*(v_inicial*dir); 
		e.posicion = e.posicion - dir * dif; 
	}
}