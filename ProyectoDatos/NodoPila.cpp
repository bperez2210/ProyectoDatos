#include "NodoPila.h"


NodoPila::NodoPila(void)
{
	dato=0;
	sig=NULL;
}
NodoPila::NodoPila(int d){
dato=d;
sig=NULL;
}

int NodoPila::getDato(){return dato;}

NodoPila::~NodoPila(void)
{
}
