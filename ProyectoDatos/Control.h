#pragma once
#include<cstdlib>
#include<stdlib.h> 
#include<time.h>
#include<list>
#include"Jugador.h"
#include"Interfaz.h"
#include"ReporteHTML.h"
#include"Pila.h"
#include <vector>
#include <random>

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
	ReporteHTML* html;
	Pila *p1;
};

