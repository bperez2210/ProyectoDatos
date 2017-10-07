#pragma once
using namespace std;
#include<iostream>
#include<sstream>

class Ficha
{
public:
	Ficha();
	Ficha(int);
	Ficha(Ficha&);
	~Ficha(void);
	void setNumero(int);
	int getNumero();
	void cambiaEstado();
	string toString();
	bool operator==(bool);
private:
	int numero;
	bool estado;
};




