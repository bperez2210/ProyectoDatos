#pragma once
#include"Tablero.h"
class NodoCola
{
public:
	NodoCola* sig;
	NodoCola(Tablero*);
	~NodoCola(void);
	Tablero* getTablero();
private:
	Tablero* tablero;
};

