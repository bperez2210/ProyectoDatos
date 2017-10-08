#pragma once
#include"ColaTab.h"
class Jugador
{
public:
	Jugador(int,int);
	~Jugador(void);
	string toString();
	string reporte();
private:
	int numJugador;
	int cantTableros;
	int cantFichas;
	ColaTab* tableros;
};

