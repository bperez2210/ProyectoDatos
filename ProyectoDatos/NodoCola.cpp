#include "NodoCola.h"


NodoCola::NodoCola(Tablero* tablero){
	this->tablero=tablero;
	this->sig = NULL;
}
NodoCola::~NodoCola(void){

}
Tablero* NodoCola::getTablero(){
	return tablero;
}