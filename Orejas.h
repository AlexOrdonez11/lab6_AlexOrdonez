
#ifndef OREJAS_H
#define OREJAS_H
#include<string>
using namespace std;
class Orejas{
	private:
		int tamano;
		int capacidad;
	public:
		Orejas();
		Orejas(int,int);
		int getTamano();
		int getCapacidad();
};
#endif

