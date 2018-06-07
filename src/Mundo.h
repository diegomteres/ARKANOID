#include "Bordes.h"
#include "Barra.h"
#include "Esfera.h"
#include "Ladrillos.h"
#include"LadrillosBonus.h"
#include "Jugador.h"
#include "ListaLadrillos.h"
#include "ListaDisparos.h"
#include"Bonus.h"
#include "Bonuses.h"

class Mundo
{
	int num;
	int nivel;
public:
	Bordes bordes;
	Pared fin;
	Bonuses bonuses;
	Barra deslizante;
	ListaLadrillos ladrillos;
	ListaDisparos disparos;
	Jugador player;
	friend class Interaccion;
	bool end;


	Mundo(){nivel=1; end=false;}
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void teclaEspecial2(unsigned char key);
	void Dibuja();
	void Mover();
	void Inicializa();
	void pasaNivel(){nivel++;}
	void setNivel(int i){nivel=i;}
	void gameover();
};