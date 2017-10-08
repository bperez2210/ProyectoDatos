#pragma once
#include"Ficha.h"

class NodoLD
{
public:
	NodoLD* arriba;
	NodoLD* abajo;
	NodoLD* izq;
	NodoLD* der;
	NodoLD* arribaIzq;
	NodoLD* arribaDer;
	NodoLD* abajoIzq;
	NodoLD* abajoDer;
	NodoLD();
	NodoLD(Ficha*);
	~NodoLD(void);
	void setFicha(Ficha*);
	Ficha* getFicha();
private:
	Ficha* ficha;
};

