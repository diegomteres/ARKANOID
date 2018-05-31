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

>>>>>>> b65349445ef21ac435b489bd52784e3ffcf9f7fe
>>>>>>> f1c7d58b8deac8817737c58160bfbe88dda22ed7
