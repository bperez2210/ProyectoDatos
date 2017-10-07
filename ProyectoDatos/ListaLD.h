#pragma once
#include"NodoLD.h"
class ListaLD
{
public:
	ListaLD(void);
	~ListaLD(void);
	bool vacio();
	void ingresar(Ficha*);
	NodoLD* getPrimero();
private:
	NodoLD* primero;
	NodoLD* ultimo;
};

