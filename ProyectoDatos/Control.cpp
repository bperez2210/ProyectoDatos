#include "Control.h"

Control::Control(void){
	inicioJuego();
	muestraDatos();
	p1=new Pila();
	llenaPila();
}

Control::~Control(void){
}

void Control::llenaPila(){
	vector<int>v1;
	for(int i=1;i<=75;i++)
		v1.push_back(i);
	while(!p1->isFull()){
		int random=v1.size();
		int aux=rand()% random;
		int x=v1.at(aux);
		p1->push(x);
		v1.begin()=v1.erase(v1.begin()+aux);
	}
	cout<<p1->getSize()<<endl;
	for(int i=0;i<75;i++)
		cout<<p1->pop()<<" ";
}

void Control::inicioJuego(){
	int cantUsuarios = Interfaz::solicitaJugadores();
	int cantCartones = Interfaz::solicitaCartones();
	for(int i=1;i<=cantUsuarios;i++){
		jugadores.push_back(new Jugador(i,cantCartones));
	}
}

void Control::muestraDatos(){
	for(auto it=jugadores.begin();it!=jugadores.end();it++){
		cout<<(*it)->toString();
	}
}


