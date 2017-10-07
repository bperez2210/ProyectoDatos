#include "ListaLD.h"


ListaLD::ListaLD(void)
{
	primero=ultimo=NULL;
}

ListaLD::~ListaLD(void){}

bool ListaLD::vacio(){
	return (primero==NULL);
}

NodoLD* ListaLD::getPrimero(){
	return primero;
}

void ListaLD::ingresar(Ficha* elemento){
	NodoLD *nuevo = new NodoLD(elemento);
	if(vacio()){
		primero=ultimo=nuevo;
	}else{
		ultimo->abajo = nuevo;
		nuevo->arriba = ultimo;
		ultimo=nuevo;
	}
}
