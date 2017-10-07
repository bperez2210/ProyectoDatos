#include "Tablero.h"


Tablero::Tablero(void){
	primero=NULL;
}

Tablero::~Tablero(void){
}

void Tablero::insertar(NodoLD *columna){
	if(!primero){primero = columna;}
	else{anidaNodos(columna);}
}

string Tablero::imprimeFil(NodoLD *fil){
	stringstream s;
	while(fil){
		s<<"บ"<<fil->getFicha()->toString();
		fil = fil->der;
	}
	s<<"บ"<<endl;
	return s.str();
};

string Tablero::toString(){
	NodoLD* aux = primero;
	stringstream s;
	s<<"ษอออหอออหอออหอออหอออป"<<endl;
	s<<"บ B บ I บ N บ G บ O บ"<<endl;
	s<<"ฬอออฮอออฮอออฮอออฮอออน"<<endl;
	for(int i=0;aux;i++){
		s<<imprimeFil(aux);
		if(i<4){s<<"ฬอออฮอออฮอออฮอออฮอออน"<<endl;}
		aux = aux->abajo;
	}
	s<<"ศอออสอออสอออสอออสอออผ"<<endl;
	return s.str();
}

int Tablero::valorFicha(int columna){
	if(columna == 0) return rand()% 15 + 1;
	if(columna == 1) return rand()% 16 + 15;
	if(columna == 2) return rand()% 16 + 30;
	if(columna == 3) return rand()% 16 + 45;
	if(columna == 4) return rand()% 16 + 60;
	return -1;
}

char Tablero::valorColumna(int numColum){ //cambiar por los rangos dentro de los ifs
	if(numColum == 0) return 'B';
	if(numColum == 1) return 'I';
	if(numColum == 2) return 'N';
	if(numColum == 3) return 'G';
	if(numColum == 4) return 'O';
	return 'E';
}

void Tablero::anidaNodos(NodoLD* nuevoppio){
	NodoLD *aux1 = primero;
	NodoLD *aux2 = nuevoppio;
	while(aux1->der){aux1 = aux1->der;}
	while(aux1){
		aux1->der = aux2;
		aux2->izq = aux1;
		aux1 = aux1->abajo;
		aux2 = aux2->abajo;
	}
}