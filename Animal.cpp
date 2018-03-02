#include"Animal.h"
#include"Patas.h"
#include"Pelaje.h"
#include"Ojos.h"
#include"Orejas.h"
#include"Cola.h"
#include<string>
#include<iostream>
Animal::Animal(string nombre,string especie,string tipo,int tamano,Patas* patas,Pelaje* pelaje,Ojos* ojos,Orejas* orejas,Cola* cola){
	this->nombre=nombre;
	this->especie=especie;
	this->tipo=tipo;
	this->tamano=tamano;
	this->patas=patas;
	this->pelaje=pelaje;
	this->ojos=ojos;
	this->orejas=orejas;
	this->cola=cola;
}
string Animal::getNombre(){
	return nombre;
}
string Animal::getEspecie(){
	return especie;
}
string Animal::getTipo(){
	return tipo;
}
int Animal::getTamano(){
	return tamano;
}
Patas* Animal::getPatas(){
	return patas;
}
Pelaje* Animal::getPelaje(){
	return pelaje;
}
Ojos* Animal::getOjos(){
       return ojos;
}
Orejas* Animal::getOrejas(){
	return orejas;
}
Cola* Animal::getCola(){
	return cola;
}

