#include "Control.h"


Control::Control(void){
	tablero=new Tablero();
	generaColumnas();
}

Control::~Control(void){
}

void Control::generaFichasColumnas(ListaLD* listaAux,int numCol){
	Ficha* fichaAux;
	int valorFichaAux;
	for(int i=0;i<5;i++){
		valorFichaAux =  Tablero::valorFicha(numCol);
		fichaAux = new Ficha(valorFichaAux);
		listaAux->ingresar(fichaAux);
	}
}

void Control::generaColumnas(){
	ListaLD *listaAux;
	for(int i=0;i<5;i++){
		listaAux = new ListaLD();
		generaFichasColumnas(listaAux,i);
		tablero->insertar(listaAux->getPrimero());
	}
	cout<<tablero->toString();
}

