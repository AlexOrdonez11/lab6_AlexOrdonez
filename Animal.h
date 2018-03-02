#include <string>
#include"Patas.h"
#include"Pelaje.h"
#include"Ojos.h"
#include"Orejas.h"
#include"Cola.h"
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	private:
		string nombre;
		string especie;
		string tipo;
		int tamano;
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;
	public:
		Animal(string, string,string,int,Patas*,Pelaje*,Ojos*,Orejas*,Cola*);
		string getNombre();
		string getEspecie();
		string getTipo();
		int getTamano();
		Patas* getPatas();
		Pelaje* getPelaje();
		Ojos* getOjos();
		Orejas* getOrejas();
		Cola* getCola();
};
#endif
