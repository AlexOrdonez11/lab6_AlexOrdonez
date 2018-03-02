#include"Orejas.h"
#include<string>
#include<iostream>
Orejas::Orejas(){
}
Orejas::Orejas(int tamano,int capacidad){
	this->tamano=tamano;
	this->capacidad=capacidad;
}
int Orejas::getTamano(){
	return tamano;
}
int Orejas::getCapacidad(){
	return capacidad;
}
