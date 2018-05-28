#include "ETSIDI.h"
#include "Coordinador.h"
#include "glut.h"					//ORDEN DE INCLUSIÓN LIBS INFLUYE, PREGUNTAR
using namespace ETSIDI;

Coordinador::Coordinador(void)
{
	estado=INICIO;
}


Coordinador::~Coordinador(void)
{
}

void Coordinador::dibuja() 
{   
	if(estado==INICIO)  
	{
		gluLookAt(0, 7.5, 30,  // posicion del ojo  
		   0.0, 7.5, 0.0,      // hacia que punto mira  (0,7.5,0)    
		   0.0, 1.0, 0.0);     // definimos hacia arriba (eje Y)    
		
		ETSIDI::setTextColor(1,1,0);							//NO PINTA Y NO SE EQUISCU
		ETSIDI::setFont("fuentes/Bitwise.ttf",16);  
		ETSIDI::printxy("ARKANOID", -5,8);    
		ETSIDI::setTextColor(1,1,0);   
		ETSIDI::setFont("fuentes/Bitwise.ttf",12);  
		ETSIDI::printxy("PULSE LA TECLA -E- PARA EMPEZAR", -5,7);  
		ETSIDI::printxy("PULSE LA TECLA -S- PARA SALIR", -5,6);  
	}
	else if(estado==JUEGO)  
		mundo.Dibuja();
}

void Coordinador::tecla(unsigned char key) 
{
	if(estado==INICIO)  
	{   
		mundo.Inicializa();   
		estado=JUEGO; 
	}  
	else if(estado==JUEGO) 
	{   
		mundo.tecla(key);
	} 
} 

void Coordinador::teclaEspecial(unsigned char key) 
{  
	if(estado==JUEGO) 
		mundo.teclaEspecial(key);
} 

void Coordinador::teclaEspecial2(unsigned char key) 
{  
	if(estado==JUEGO) 
		mundo.teclaEspecial2(key);
} 


void Coordinador::mueve()
{  
	if(estado==JUEGO) 
		mundo.Mover(); 
} 


