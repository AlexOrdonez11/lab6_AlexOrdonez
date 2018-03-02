#include<string>
#ifndef PELAJE_H
#define PELAJE_H
#include<iostream>
using namespace std;
class Pelaje{
	private:
		string color;
		int grosor;
		int largo;
	public:
		Pelaje();
		Pelaje(string,int,int);
		string getColor();
		int getLargo();
		int getGrosor();
};
#endif

