#pragma once
#include"NodoLD.h"
#include<cstdlib>
#include <stdlib.h> 
#include <time.h>

class Tablero
{
public:
	Tablero(void);
	~Tablero(void);
	void insertar(NodoLD*);
	string imprimeFil(NodoLD*);
	static int valorFicha(int);
	static char valorColumna(int);
	void anidaNodos(NodoLD*);
	string toString();
private:
	NodoLD* primero;
};

