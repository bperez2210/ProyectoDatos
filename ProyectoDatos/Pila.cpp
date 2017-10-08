#include "Pila.h"


Pila::Pila(){
	primero=NULL;
	size=0;
}

	int Pila::push(int item){
		if(!isFull()){
			NodoPila *aux=new NodoPila(item);
			aux->sig=primero;
			primero=aux;
			size+=1;
			return 1;  //ingreso exitoso....return 1 
		}
		return 0;
	}

	int Pila::getSize(){return size;}

	int Pila::pop(){
		if(!isEmpty()){
			int item=primero->getDato();
			NodoPila*aux=primero;
			primero=primero->sig;
			size-=1;
			delete aux;
			return item;  //Salida exitosa
		}
	}

	int Pila::isEmpty(){
		return (size==0);
	}

	int Pila::isFull(){
		return (size==74);
	}
	Pila::~Pila(){
	}
