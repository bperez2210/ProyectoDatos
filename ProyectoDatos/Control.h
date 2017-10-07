#pragma once
#include"Tablero.h"
#include"ListaLD.h"
#include<cstdlib>
#include <stdlib.h> 
#include <time.h>

class Control
{
public:
	Control(void);
	~Control(void);
	void generaFichasColumnas(ListaLD*,int);
	void generaColumnas();
private:
	Tablero* tablero;
};

