#include "NodoLD.h"


NodoLD::NodoLD(){
	ficha=NULL;
	arriba = abajo = izq = der = NULL;
}
NodoLD::NodoLD(Ficha* ficha){
	this->ficha=ficha;
	arriba = abajo = izq = der = NULL;
}
NodoLD::~NodoLD(void){
}
void NodoLD::setFicha(Ficha* ficha){
	this->ficha=ficha;
}
Ficha* NodoLD::getFicha(){
	return this->ficha;
}
