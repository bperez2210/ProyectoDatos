#pragma once
using namespace std;
#include<iostream>
#include<fstream>
#include <string>
#include<sstream>

class ReporteHTML
{
public:
	ReporteHTML();
	~ReporteHTML();
	void iniciaHTML();
	void setParametros(int cantUsuarios,int cantCartones,int tipoJuego);
	void actualizaHTML(string cartJugador);
	void actualizaHTML(string cartonesJugador,string infoGanador);
	void finalizaHTML();
private:
	ofstream html;
	stringstream paramIniciales;
	stringstream cartonesJugador;
	stringstream infoGanador;
};

