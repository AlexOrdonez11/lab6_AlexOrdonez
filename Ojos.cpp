#include"Ojos.h"
#include<string>
#include<iostream>
Ojos::Ojos(){
}
Ojos::Ojos(string color,bool nocturnos){
	this->color=color;
	this->nocturnos=nocturnos;
}
string Ojos::getColor(){
	return color;
}
string Ojos::getNocturnos(){
	if(nocturnos){
		return "Yes";
	}else{
		return "No";
	}
}
