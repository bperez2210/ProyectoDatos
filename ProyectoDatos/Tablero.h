#pragma once
#include"NodoLD.h"
#include"ListaLD.h"
#include<cstdlib>
#include<stdlib.h> 
#include<time.h>
#include<set>

class Tablero
{
public:
	Tablero(void);
	~Tablero(void);
	void insertar(NodoLD*);
	static int valorFicha(int);
	static char valorColumna(int);
	void anidaNodos(NodoLD*);
	void generaFichasColumnas(ListaLD*,int);
	void generaColumnas();
	string imprimeFil(NodoLD*);
	string toString();
	string reporteFil(NodoLD*);
	string reporteTablero();
private:
	NodoLD* primero;
};

