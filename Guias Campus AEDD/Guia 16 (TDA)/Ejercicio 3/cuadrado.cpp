#include<iostream>
#include <iomanip>
#include "cuadrado.h"
using namespace std;

cuadrado crear_cuadrado(float lado){
	cuadrado c;
	c.lado=lado;
	
	return c;
}
float perimetroCuad(cuadrado c){
	return (c.lado*4);
}
float areaCuad(cuadrado c){
	return (c.lado*c.lado);
}
void submenuCuadrado(cuadrado& c){
	bool creado=false;
	int opcion;

	do{
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"1. Crear cuadrado"<<endl;
		cout<<"2. Perimetro"<<endl;
		cout<<"3. Area"<<endl;
		cout<<"4. Salir del submenu"<<endl;
		cout<<"Elija una opcion: ";
		
		cin>>opcion;
		system("cls");
		switch(opcion){
		case 1:
			cout<<"Ingrese el lado: ";
			cin>>c.lado;
			creado=true;
		break;
		case 2:
			if(creado){
				cout<<"El perimetro del cuadrado es de "<<fixed<<setprecision(2)<<perimetroCuad(c)<<endl;
			}else{
				cout<<"Debe crear la figura primero."<<endl;
			}
		break;
		case 3:
			if(creado){
				cout<<"El area del cuadrado es de "<<fixed<<setprecision(2)<<areaCuad(c)<<endl;
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
