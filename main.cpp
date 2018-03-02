#include"Zoologico.h"
#include "Animal.h"
#include"Patas.h"
#include"Pelaje.h"
#include"Ojos.h"
#include"Orejas.h"
#include"Cola.h"
#include<string>
#include<iostream>
#include<vector>

using namespace std;

void Crear(vector<Animal>&);
void Agregar(Zoologico*&,vector<Animal>&);
void Listar(Zoologico*);
void Eliminar(vector<Animal>&);
int main(){
	vector<Animal> espera;
	int op=0,tamano,capacidad;
	string nombre;
	cout<<"Ingrese el nombre del zoologico:"<<endl;
	cin>>nombre;
	cout<<"Ingrese el tamano del zoo:"<<endl;
	cin>>tamano;
	cout<<"Ingrese la capacidad:"<<endl;
	cin>>capacidad;
	Zoologico* zoo=new Zoologico(nombre,tamano,capacidad);
	while(op!=5){
		cout<<"Menu:"<<endl;
		cout<<"1-Crear Animales"<<endl;
		cout<<"2-Agregar Animales al zoo"<<endl;
		cout<<"3-Eliminar animal"<<endl;
		cout<<"4-Listar"<<endl;
		cout<<"5-Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				Crear(espera);
				break;
			case 2:
				Agregar(zoo,espera);
				break;
			case 3:
				Eliminar(espera);
				break;
			case 4:
				Listar(zoo);
				break;
		}
	}
	return 0;
}
void Eliminar(vector<Animal>& espera){
	int op;
	cout<<"Ingrese que posicion quiere eliminar"<<endl;
	cin>>op;
	//delete espera[op];
	espera.erase(espera.begin()+op);
}
void Listar(Zoologico* zoo){
	cout<<"Tipo Artico:"<<endl;
	for(int i=0;i<zoo->getArtica().size();i++){
		cout<<zoo->getArtica()[i].getNombre()<<" "<<zoo->getArtica()[i].getEspecie()<<endl;
	}
	cout<<"Tipo Desertico:"<<endl;
	for(int i=0;i<zoo->getDesertica().size();i++){
		cout<<zoo->getDesertica()[i].getNombre()<<" "<<zoo->getDesertica()[i].getEspecie()<<endl;
	}
	cout<<"Tipo Jungla:"<<endl;
	for(int i=0;i<zoo->getJungla().size();i++){
		cout<<zoo->getJungla()[i].getNombre()<<" "<<zoo->getJungla()[i].getEspecie()<<endl;
	}
	cout<<"Tipo Sabana:"<<endl;
	for(int i=0;i<zoo->getSabana().size();i++){
		cout<<zoo->getSabana()[i].getNombre()<<" "<<zoo->getSabana()[i].getEspecie()<<endl;
	}
}
void Agregar(Zoologico*& zoo,vector<Animal>& espera){
	for(int i=0;i<espera.size();i++){
		if(espera[i].getTipo()=="Artico"){
			zoo->setAnimalArtico(espera[i]);	
		}else{
			if(espera[i].getTipo()=="Desertico"){
				zoo->setAnimalDesertico(espera[i]);
			}else{
				if(espera[i].getTipo()=="Jungla"){
					zoo->setAnimalJungla(espera[i]);	
				}else{
					if(espera[i].getTipo()=="Sabana"){
						zoo->setAnimalSabana(espera[i]);
					}
				}
			}
		}

	}
	espera.clear();
}
void Crear(vector<Animal>& espera){
	string nombre,especie,tipo;
	int tamanio;
	cout<<"Ingrese el nombre"<<endl;
	cin>>nombre;
	cout<<"Ingrese la especie"<<endl;
	int tip;
	cout<<"Ingrese el tipo"<<endl;
	cout<<"1-artico"<<endl;
	cout<<"2-desertico"<<endl;
	cout<<"3-jungla"<<endl;
	cout<<"4-sabana"<<endl;
	cin>>tip;
	switch(tip){
		case 1:
			tipo="Artico";
			break;
		case 2:
			tipo="Desertico";
			break;
		case 3:
			tipo="Jungla";
			break;
		case 4:
			tipo="Sabana";
			break;
	}
	cout<<"Ingrese el tamano del animal"<<endl;
	int patas,largop,grosor,largope,tamano,capacidad,largoc;
	string colorp,coloro,tipop;
	cout<<"Ingrese la cantidad de patas"<<endl;
	cin>>patas;
	cout<<"Ingrese el largo de las patas"<<endl;
	cin>>largop;
	cout<<"Ingrese el tipo de pata"<<endl;
	cin>>tipop;
	cout<<"Ingrese el grosor del pelo"<<endl;
	cin>>grosor;
	cout<<"Ingrese el largo del pelo"<<endl;
	cin>>largope;
	cout<<"Ingrese el tamano de las orejas"<<endl;
	cin>>tamano;
	cout<<"Ingrese la capacidad de audicion"<<endl;
	cin>>capacidad;
	cout<<"Ingrese el largo de la cola"<<endl;
	cin>>largoc;
	cout<<"Ingrese el color del pelo"<<endl;
	cin>>colorp;
	cout<<"Ingrese el color de los ojos"<<endl;
	cin>>coloro;
	bool noc,peluda;
	cout<<"Ingrese si tiene vision nocturna[0/1]"<<endl;
	cin>>noc;
	cout<<"Ingrese si su cola es peluda[0/1]"<<endl;
	cin>>peluda;
	Patas* pata=new Patas(patas,largop,tipop);
	Pelaje* pelaje=new Pelaje(colorp,grosor,largope);
	Ojos* ojos=new Ojos(coloro,noc);
	Orejas* orejas=new Orejas(tamano,capacidad);
	Cola* cola=new Cola(largoc,peluda);
	Animal* animal=new Animal(nombre,especie,tipo,tamanio,pata,pelaje,ojos,orejas,cola);
}

	
	
