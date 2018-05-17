#include "Mundo.h"
#include "glut.h"
#include "Interaccion.h"
#include "Barra.h"
#include"Ladrillos.h"
#include"ListaLadrillos.h"
#include"Esfera.h"

void Mundo::Dibuja()
{
	int c=0;
	char nombre[] = "ARKANOID";

	gluLookAt(50.0,50.0,65.0,
			50.0,50.0,0.0,
			0.0,1.0,0.0);
		
		//METER EN UNA CLASE - BACKGROUND 
	
	glDisable(GL_LIGHTING);
	/*
	glColor3ub(0,0,200);
	glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(100, 0);
		glVertex2f(100, 100);
        glVertex2f(0, 100);
    glEnd();
	*/

	//Nombre Juego ARKANOID
	glColor3ub(255,255,255);
	for(int i=0;nombre[i]!='\0';i++)
	{
	glRasterPos3i(30+c,100,1);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,nombre[i]);
	c+=5;
	}

	//Dibujar
	ladrillos.dibuja();
	esfera.Dibuja();
	bordes.Dibuja();
	deslizante.Dibuja();
//	amarillo1.Dibuja();
	player.vidas(player.vida);
	if(player.gameover = true)
		gameover();
	glEnable(GL_LIGHTING);
}

void Mundo::Mover()
{
	esfera.Mover(0.025f);
	deslizante.Mover(0.025f);
	Interaccion::rebote(esfera, bordes);
	Interaccion::rebote(deslizante, bordes);
	Interaccion::rebote(esfera, deslizante);
	Interaccion::rebote(esfera, ladrillos);
	if(Interaccion::rebote(esfera, bordes.suelo) == true)
	{
		esfera.posicion.x=50.0f;
		esfera.posicion.y=2.0f;
		esfera.velocidad.x=2.0f;
		esfera.velocidad.y=50.0f;
	
		deslizante.posicion.x=45.0f;
		player.vida--;
	}
	if(player.vida=='0')
		player.gameover = true;
}

void Mundo::Inicializa()
{
	pulsado=false;
	esfera.SetColor(0,255,0);
	esfera.SetPos(50.0f,5.0f);
	esfera.SetRadio(1.0f);
	esfera.setVel(0.0f,40.0f);

	deslizante.SetColor(255,0,0);
	deslizante.SetPos(45.0f,2.0f,55.0f,1.0f);	//Unico, cambio setpos de x e y , no limites
	
	Ladrillos *e1=new Ladrillos(55.0f,5.0f,65.0f,2.0f);
	e1->SetColor(0,0,255);
	ladrillos.agregar(e1); //esfera

	Ladrillos *e2=new Ladrillos(25.0f,9.0f,35.0f,6.0f);
	e2->SetColor(0,0,255);
	ladrillos.agregar(e2); //esfera2
/*
	amarillo1.SetColor(0,255,0);
	amarillo1.SetPos(45.0f,7.0f,55.0f,5.0);
*/

	player.vida = '3';
	player.gameover = false;

	fin.SetPos(10.0f,10.0f,90.0f,90.0f);
	fin.SetColor(0,0,255);
}

void Mundo::teclaEspecial(unsigned char key) 
{ 
		switch(key) 
		{  
			case GLUT_KEY_LEFT: 
				deslizante.setVel (-25.0f, 0.0f);
					break;  
			case GLUT_KEY_RIGHT:  
				deslizante.setVel (25.0f, 0.0f);  
					break;	
		}
} 

void Mundo::teclaEspecial2(unsigned char key)
{
	switch(key)
	{
	case GLUT_KEY_LEFT:
		deslizante.setVel (0,0);
			break;
	case GLUT_KEY_RIGHT:
		deslizante.setVel (0,0);
			break;
	}
}

void Mundo::gameover()
{
//	fin.Dibuja();
}

