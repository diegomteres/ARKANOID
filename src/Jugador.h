#pragma once
class Jugador
{
public:
	int vida;
	bool gameover;
	void inicializa();
	Jugador(void);
	virtual ~Jugador(void);
	void vidas(int);
	
};

