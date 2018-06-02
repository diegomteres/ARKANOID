#include "Bordes.h"
#include "Barra.h"
#include "Esfera.h"
#include "Ladrillos.h"
#include "Jugador.h"
#include "ListaLadrillos.h"
#include "ListaDisparos.h"
#include"Bonus.h"
#include "Bonuses.h"

class Mundo
{
public:
	Bordes bordes;
	Pared fin;
//	Bonus bonus;
	Bonuses bonuses;
//	Esfera esfera;
	Barra deslizante;
	ListaLadrillos ladrillos;
	ListaDisparos disparos;
	Jugador player;
	int num;
	friend class Interaccion;

	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void teclaEspecial2(unsigned char key);
	void Dibuja();
	void Mover();
	void Inicializa();
	void gameover();
};