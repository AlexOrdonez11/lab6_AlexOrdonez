#include "Zoologico.h"
#include <string>
#include"Animal.h"
#include<iostream>

Zoologico::Zoologico(){

}
Zoologico::Zoologico(string nombre,int tamano,int capacidad){
	this->nombre=nombre;
	this->tamano=tamano;
	this->capacidad=capacidad;
	this->artica=artica;
	this->desertica=desertica;
	this->jungla=jungla;
	this->sabana=sabana;
}
int Zoologico::getTamano(){
	return tamano;
}
int Zoologico::getCapacidad(){
	return capacidad;
}
string Zoologico::getNombre(){
	return nombre;
}
vector<Animal> Zoologico::getArtica(){
	return artica;
}
vector<Animal> Zoologico::getDesertica(){
	return desertica;
}
vector<Animal> Zoologico::getJungla(){
	return jungla;
}
vector<Animal> Zoologico::getSabana(){
	return sabana;
}
void Zoologico::setAnimalArtico(Animal animal){
	artica.push_back(animal);
}
void Zoologico::setAnimalDesertico(Animal animal){
	desertica.push_back(animal);
}
void Zoologico::setAnimalJungla(Animal animal){
	jungla.push_back(animal);
}
void Zoologico::setAnimalSabana(Animal animal){
	sabana.push_back(animal);
}

