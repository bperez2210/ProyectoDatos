#include "Interfaz.h"


int Interfaz::solicitaJugadores(){
	int opc;
	cout<<"->Digite la cantidad de jugadores :";
	cin>>opc;
	return opc;
}
int Interfaz::solicitaCartones(){
	int opc;
	cout<<"->Digite la cantidad de cartones por jugador :";
	cin>>opc;
	return opc;
}
int Interfaz::solicitaTipoJuego(){
	int opc;
	cout<<"| 1 - X | 2 - L | 3- U | 4 - Esquinas |"<<endl;
	cout<<"->Digite el tipo de juego :";
	cin>>opc;
	return opc;
}
