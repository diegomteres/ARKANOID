<<<<<<< HEAD
#pragma once
#include "Mundo.h"

class Coordinador
{
public:
	Coordinador(void);
	~Coordinador(void);

	void Tecla(unsigned char key);
//	void tecla(unsigned char key);  
	void teclaEspecial(unsigned char key); 
	void teclaEspecial2(unsigned char key); 
	void mueve(void); 
	void dibuja(void);


protected:
	Mundo mundo;
	enum Estado {INICIO, JUEGO, GAMEOVER, FIN};  
	Estado estado;
};

=======
#pragma once
#include "Mundo.h"

class Coordinador
{
public:
	Coordinador(void);
	~Coordinador(void);

	void Tecla(unsigned char key);
//	void tecla(unsigned char key);  
	void teclaEspecial(unsigned char key); 
	void teclaEspecial2(unsigned char key); 
	void mueve(void); 
	void dibuja(void);


protected:
	Mundo mundo;
	enum Estado {INICIO, JUEGO, GAMEOVER, FIN};  
	Estado estado;
};

>>>>>>> f1c7d58b8deac8817737c58160bfbe88dda22ed7
