#include "Patas.h"
#include <string>
#include<iostream>
Patas::Patas(){
}
Patas::Patas(int patas,int largo,string tipo ){
	this->patas=patas;
	this->largo=largo;
	this->tipo=tipo;
}
int Patas::getPatas(){
	return patas;
}
int Patas::getLargo(){
	return largo;

}
string Patas::getTipo(){
	return tipo;
}
