#pragma once
#include<cstdlib>
#include<stdlib.h> 
#include<time.h>
#include<list>
#include <vector>
#include <random>
#include"Jugador.h"
#include"Interfaz.h"
#include "Pila.h"

class Control
{
public:
	Control(void);
	~Control(void);
	void inicioJuego();
	void muestraDatos();
	void llenaPila();
private:
	std::list<Jugador*> jugadores;
	Pila *p1;
};

