#include "Barra.h"
#include "glut.h"
#include "cmath"

Barra::Barra(void)
{
}


Barra::~Barra(void)
{

}

void Barra::Dibuja()//CAMBIO
{
	//como la barra tiene unas dimensiones de 10x1 , con saber un punto ya vale
	//Cuando hacemos SetPos en mundo.cpp(inicializa) para la barra tenemos que indicar la esquina superior derecha de la barra.
	float rangox,rangoy;
	rangox = limite2.x-limite1.x;
	rangoy = limite1.y-limite2.y;
	glColor3ub(rojo,verde,azul);
	glBegin(GL_QUADS);
	glVertex3f(posicion.x,posicion.y-rangoy, 1.0f);	//esquina inferior izquierda
	glVertex3f(posicion.x+rangox,posicion.y-rangoy, 1.0f);		//esquina inferior derecha
	glVertex3f(posicion.x+rangox,posicion.y, 1.0f);		//esquina superior izquierda
	glVertex3f(posicion.x,posicion.y, 1.0f);		//esquina superior derecha
    glEnd();
}

float Barra::distancia(Vector2D punto, Vector2D *direccion)
{  
		Vector2D l1 = posicion , l2;
	l2.x = posicion.x + (limite2.x-limite1.x);
	l2.y = posicion.y + (limite2.y-limite1.y);
	Vector2D u=(punto-l1);
	Vector2D v=(l2-l1).unitario();
	float longitud=(l1-l2).modulo(); 
	Vector2D dir; 
	float valor=u*v; 
	float distancia=0; 

	if (valor<0)   
		dir = u; 
	else if (valor>longitud)  
		dir = (punto - l2);  
	else
		dir = u - v * valor;  
	distancia = dir.modulo(); 
	if (direccion != 0) //si nos dan un vector…  
		*direccion=dir.unitario();  
	return distancia;
}