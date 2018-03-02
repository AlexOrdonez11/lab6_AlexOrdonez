#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H
#include"Animal.h"
#include <string>
#include<vector>

using namespace std;

class Zoologico {
	private:
		string nombre;
		int tamano;
		int capacidad;
		vector<Animal> artica;
		vector<Animal> desertica;
		vector<Animal> jungla;
		vector<Animal> sabana;
	public:
		Zoologico();
		Zoologico(string,int,int);
		int getTamano();
		int getCapacidad();
		string getNombre();
		vector<Animal> getArtica();
		vector<Animal> getDesertica();
		vector<Animal> getJungla();
		vector<Animal> getSabana();
		void setAnimalArtico(Animal);
		void setAnimalDesertico(Animal);
		void setAnimalJungla(Animal);
		void setAnimalSabana(Animal);
};
#endif


