#pragma once
#include"NodoCola.h"
class ColaTab
{
public:
	ColaTab(void);
	~ColaTab(void);
	bool vacio();
	void push(Tablero*);
	Tablero* pop();
	string toString();
	string reporte();
private:
	NodoCola* primero;
	NodoCola* ultimo;
};

