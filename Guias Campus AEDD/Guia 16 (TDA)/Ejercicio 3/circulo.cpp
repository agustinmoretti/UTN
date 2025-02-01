#include <iostream>
#include <iomanip>
#include <cmath>
#include "circulo.h"
using namespace std;

circulo crear_circulo(float diametro){
	circulo c;
	c.diametro=diametro;
	c.radio=diametro/2;
	
	return c;
}
float perimetroC(circulo c){
	return (M_PI*c.diametro);
}
float areaC(circulo c){
	return (M_PI*pow(c.radio, 2));
}
void submenuCirculo(circulo& c){
	bool creado=false;//bandera para determinar si fue creada la figura antes de ser operada
	int opcion;
	
	do{
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"1. Crear circulo"<<endl;
		cout<<"2. Perimetro"<<endl;
		cout<<"3. Area"<<endl;
		cout<<"4. Salir del submenu"<<endl;
		cout<<"Elija una opcion: ";
		
		cin>>opcion;
		system("cls");
		switch(opcion){
		case 1:
			cout<<"Ingrese el diametro: ";
			cin>>c.diametro;
			creado=true;
		break;
		case 2:
			if(creado){
				cout<<"El perimetro del circulo es de "<<fixed<<setprecision(2)<<perimetroC(c)<<endl;
			}else{
				cout<<"Debe crear la figura primero."<<endl;
			}
		break;
		case 3:
			if(creado){
				cout<<"El area del circulo es de "<<fixed<<setprecision(2)<<areaC(c)<<endl;
			}else{
				cout<<"Debe crear la figura primero."<<endl;
			}
		break;
		case 4:
			cout<<"Volviendo al menu principal..."<<endl;
			break;
		default:
			cout<<"Opcion no valida, intente nuevamente."<<endl;
			break;
		}
	}while(opcion!=4);
}
