#include "Jugador.h"


Jugador::Jugador(int numJugador,int cantTab){
	this->numJugador=numJugador;
	this->cantTableros=cantTab;
	this->tableros = new ColaTab();
	for(int i=0;i<cantTab;i++){
		tableros->push(new Tablero());
	}
}

Jugador::~Jugador(void){

}

string Jugador::toString(){
	stringstream s;
	s<<"Jugador N:"<<numJugador<<" ("<<cantTableros<<" Tableros)"<<endl;
	s<<tableros->toString();
	return s.str();
}