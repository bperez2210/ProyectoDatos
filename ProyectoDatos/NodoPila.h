#include <iostream>
using namespace std;
class NodoPila
{
private:
	int dato;
public:
	NodoPila *sig;
	NodoPila(void);
	int getDato();
	NodoPila(int);
	~NodoPila(void);
};

