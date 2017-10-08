#include "Tablero.h"


Tablero::Tablero(void){
	primero=NULL;
	generaColumnas();
	NodoLD* aux1 = primero;
}

Tablero::~Tablero(void){
}

//-----------------------------------------------------------
//-----------------------------------------------------------

void Tablero::insertar(NodoLD *columna){
	if(!primero){primero = columna;}
	else{anidaNodos(columna);}
}

void Tablero::anidaNodos(NodoLD* nuevoppio){
	NodoLD *aux1 = primero;
	NodoLD *aux2 = nuevoppio;
	while(aux1->der){aux1 = aux1->der;}
	while(aux1){
		aux1->der = aux2;
		aux2->izq = aux1;
		aux1->arribaDer = aux2->arriba;
		aux1->abajoDer = aux2->abajo;
		aux2->arribaIzq = aux1->arriba;
		aux2->abajoIzq = aux1->abajo;
		aux1 = aux1->abajo;
		aux2 = aux2->abajo;
	}
}

//-----------------------------------------------------------
//-----------------------------------------------------------

string Tablero::imprimeFil(NodoLD *fil){
	stringstream s;
	while(fil){
		s<<"º"<<fil->getFicha()->toString();
		fil = fil->der;
	}
	s<<"º"<<endl;
	return s.str();
};

string Tablero::toString(){
	NodoLD* aux = primero;
	stringstream s;
	s<<"ÉÍÍÍËÍÍÍËÍÍÍËÍÍÍËÍÍÍ»"<<endl;
	s<<"º B º I º N º G º O º"<<endl;
	s<<"ÌÍÍÍÎÍÍÍÎÍÍÍÎÍÍÍÎÍÍÍ¹"<<endl;
	for(int i=0;aux;i++){
		s<<imprimeFil(aux);
		if(i<4){s<<"ÌÍÍÍÎÍÍÍÎÍÍÍÎÍÍÍÎÍÍÍ¹"<<endl;}
		aux = aux->abajo;
	}
	s<<"ÈÍÍÍÊÍÍÍÊÍÍÍÊÍÍÍÊÍÍÍ¼"<<endl;
	return s.str();
}

string Tablero::reporteFil(NodoLD* fil){
	stringstream s;
	while(fil){
		s<<"<td>"<<fil->getFicha()->toString()<<"</td>"<<endl;
		fil = fil->der;
	}
	return s.str();
}
string Tablero::reporteTablero(){
	stringstream s;
	NodoLD* aux = primero;
	s<<"<table>"<<endl;
	s<<"<thead>"<<endl;
	s<<"<th>B</th>"<<"<th>I</th>"<<"<th>N</th>"<<"<th>G</th>"<<"<th>O</th>"<<endl;
	s<<"</thead>"<<endl;
	for(int i=0;aux;i++){
		s<<"<tr>"<<endl;
		s<<reporteFil(aux);
		s<<"</tr>"<<endl;
		aux = aux->abajo;
	}
	s<<"</table>"<<endl;
	return s.str();
}

//-----------------------------------------------------------
//-----------------------------------------------------------

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

//-----------------------------------------------------------
//-----------------------------------------------------------


void Tablero::generaFichasColumnas(ListaLD* listaAux, int numCol){
	std::set<int> v1;
	Ficha* fichaAux;
	int valorFichaAux;
	bool boolean=false;
	std::pair<set<int>::iterator,bool>p1;
	for(int i=0;i<5;i++){
		do{
			valorFichaAux = valorFicha(numCol);
			p1=v1.insert(valorFichaAux);
			boolean=p1.second;
		}while(!boolean);
	fichaAux = new Ficha(valorFichaAux);
	listaAux->ingresar(fichaAux);
	}
}

void Tablero::generaColumnas(){
	ListaLD *listaAux;
	for(int i=0;i<5;i++){
		listaAux = new ListaLD();
		generaFichasColumnas(listaAux,i);
		insertar(listaAux->getPrimero());
	}
}






















