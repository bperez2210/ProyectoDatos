#pragma once
#include"ColaTab.h"
class Jugador
{
public:
	Jugador(int,int);
	~Jugador(void);
	string toString();
private:
	int numJugador;
	int cantTableros;
	int cantFichas;
	ColaTab* tableros;
};

