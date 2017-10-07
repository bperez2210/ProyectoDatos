#include "Ficha.h"

Ficha::Ficha(){
	this->numero=0;
	this->estado=true;
}
Ficha::Ficha(int numero){
	this->numero=numero;
}
Ficha::Ficha(Ficha& ficha){
	this->numero=ficha.numero;
	this->estado=ficha.estado;
}
Ficha::~Ficha(void){
}
void Ficha::setNumero(int numero){
	this->numero=numero;
}
int Ficha::getNumero(){
	return this->numero;
}
void Ficha::cambiaEstado(){
	estado = (estado)? false:true;
}
string Ficha::toString(){
	stringstream s;
	if(estado){ (numero<10)? s<<" "<<numero : s<<numero;}
	else{s<<" X";}
	s<<" ";
	return s.str();
}
bool Ficha::operator==(bool eliminado){
	return (eliminado)? (estado) : (!estado);
}