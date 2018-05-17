#include "Bordes.h"
#include "Barra.h"
#include "Esfera.h"
#include "Ladrillos.h"
#include "Jugador.h"

class Mundo
{
public:
	bool pulsado;
	Bordes bordes;
	Pared fin;
	Esfera esfera;
	Barra deslizante;
	Ladrillos rojo4;
	Ladrillos azul3;
	Ladrillos verde2;
	Ladrillos amarillo1;
	Jugador player;


	void teclaEspecial(unsigned char key);
	void teclaEspecial2(unsigned char key);
	void Dibuja();
	void Mover();
	void Inicializa();
	void gameover();

};