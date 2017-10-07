#include "NodoPila.h"
#include <iostream>
using namespace std;
class Pila{
private:
	int size;
	NodoPila* primero;
public:
	Pila();
	int push(int);  //ingresa elementos en la pila
	int pop();         //"Saca" elemento de la Pila.
	int isEmpty();		//si la pila esta vacia.(vacia=1).
	int isFull();		//Si la pila est llena (vector lleno).
	int getSize();
	~Pila(void);
};

