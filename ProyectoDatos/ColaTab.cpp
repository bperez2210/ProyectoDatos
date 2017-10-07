#include "ColaTab.h"

ColaTab::ColaTab(void){
	primero=ultimo=NULL;
}

ColaTab::~ColaTab(void){
}

bool ColaTab::vacio(){
	return (primero==NULL);
}

void ColaTab::push(Tablero* tablero){
	NodoCola *nuevo = new NodoCola(tablero);
	if(vacio()){
		primero=ultimo=nuevo;
	}else{
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
}

Tablero* ColaTab::pop(){
	if(vacio()) return NULL;
	NodoCola* aux = primero;
	primero = primero->sig;
	return aux->getTablero();
}

string ColaTab::toString(){
	stringstream s;
	NodoCola* aux=primero;
	while(aux){
		s<<aux->getTablero()->toString()<<endl;
		aux=aux->sig;
	}
	return s.str();
}
