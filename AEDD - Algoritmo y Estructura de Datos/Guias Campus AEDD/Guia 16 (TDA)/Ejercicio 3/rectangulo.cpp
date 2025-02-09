#include<iostream>
#include <iomanip>
#include "rectangulo.h"
using namespace std;

rectangulo crear_rectangulo(float base, float altura){
	rectangulo r;
	r.base=base;
	r.altura=altura;
	
	return r;
}
float perimetroR(rectangulo r){
	return (r.base*2)+(r.altura*2);
}
float areaR(rectangulo r){
	return (r.base*r.altura);	
}
void submenuRectangulo(rectangulo& r){
	bool creado=false;
	int opcion;

	do{
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"1. Crear rectangulo"<<endl;
		cout<<"2. Perimetro"<<endl;
		cout<<"3. Area"<<endl;
		cout<<"4. Salir del submenu"<<endl;
		cout<<"Elija una opcion: ";
		
		cin>>opcion;
		system("cls");
		switch(opcion){
		case 1:
			cout<<"Ingrese la base: ";
			cin>>r.base;
			cout<<endl;
			cout<<"Ingrese la altura: ";
			cin>>r.altura;
			creado=true;
		break;
		case 2:
			if(creado){
				cout<<"El perimetro del rectangulo es de "<<fixed<<setprecision(2)<<perimetroR(r)<<endl;
			}else{
				cout<<"Debe crear la figura primero."<<endl;
			}
		break;
		case 3:
			if(creado){
				cout<<"El area del rectangulo es de "<<fixed<<setprecision(2)<<areaR(r)<<endl;
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
