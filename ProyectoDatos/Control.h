#pragma once
#include<cstdlib>
#include<stdlib.h> 
#include<time.h>
#include<list>
#include"Jugador.h"
#include"Interfaz.h"

class Control
{
public:
	Control(void);
	~Control(void);
	void inicioJuego();
	void muestraDatos();
private:
	std::list<Jugador*> jugadores;
};

