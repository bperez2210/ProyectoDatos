#include "Control.h"

Control::Control(void){
	inicioJuego();
	muestraDatos();
}

Control::~Control(void){
}

void Control::inicioJuego(){
	int cantUsuarios = Interfaz::solicitaJugadores();
	int cantCartones = Interfaz::solicitaCartones();
	for(int i=1;i<=cantUsuarios;i++){
		jugadores.push_back(new Jugador(i,cantCartones));
	}
}

void Control::muestraDatos(){
	for(auto it=jugadores.begin();it!=jugadores.end();it++){
		cout<<(*it)->toString();
	}
}


