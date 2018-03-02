#include "Pelaje.h"
#include <string>
#include<iostream>
Pelaje::Pelaje(){
}
Pelaje::Pelaje(string color,int grosor,int largo){
	this->color=color;
	this->grosor=grosor;
	this->largo=largo;
}
int Pelaje::getGrosor(){
	return grosor;
}
int Pelaje::getLargo(){
	return largo;
}
string Pelaje::getColor(){
	return color;
}
