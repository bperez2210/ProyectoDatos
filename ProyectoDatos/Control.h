#pragma once
#include<cstdlib>
#include<stdlib.h> 
#include<time.h>
#include<list>
#include <vector>
#include <random>
#include"Jugador.h"
#include"Interfaz.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include"ReporteHTML.h"
=======
#include "Pila.h"
>>>>>>> 01a3786aec8c46c3b3278ccbb22500e310dc6fdf
=======
#include "Pila.h"
>>>>>>> 01a3786aec8c46c3b3278ccbb22500e310dc6fdf

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
<<<<<<< HEAD
<<<<<<< HEAD
	ReporteHTML* html;
=======
	Pila *p1;
>>>>>>> 01a3786aec8c46c3b3278ccbb22500e310dc6fdf
=======
	Pila *p1;
>>>>>>> 01a3786aec8c46c3b3278ccbb22500e310dc6fdf
};

