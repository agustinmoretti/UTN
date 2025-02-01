#include<iostream>
#include <iomanip>
#include "triangulo.h"
using namespace std;

triangulo crear_triangulo(float lado1, float lado2, float base, float altura){
	triangulo t;
	t.lado1=lado1;
	t.lado2=lado2;
	t.base=base;
	t.altura=altura;
	
	return t;
}
float perimetroT(triangulo t){
	return (t.lado1+t.lado2+t.base);
}
float areaT(triangulo t){
	return (t.base*t.altura)/2;	
}
void submenuTriangulo(triangulo& t){
	bool creado=false;
	int opcion;
	
	do{
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"1. Crear triangulo"<<endl;
		cout<<"2. Perimetro"<<endl;
		cout<<"3. Area"<<endl;
		cout<<"4. Salir del submenu"<<endl;
		cout<<"Elija una opcion: ";
		
		cin>>opcion;
		system("cls");
		switch(opcion){
			case 1:
				cout<<"Ingrese el lado 1: ";
				cin>>t.lado1;
				cout<<endl;
				cout<<"Ingrese el lado 2: ";
				cin>>t.lado2;
				cout<<endl;
				cout<<"Ingrese la base: ";
				cin>>t.base;
				cout<<endl;
				cout<<"Ingrese la altura: ";
				cin>>t.altura;
				creado=true;
			break;
			case 2:
				if(creado){
					cout<<"El perimetro del triangulo es de "<<fixed<<setprecision(2)<<perimetroT(t)<<endl;
				}else{
					cout<<"Debe crear la figura primero."<<endl;
				}
			break;
			case 3:
				if(creado){
					cout<<"El area del triangulo es de "<<fixed<<setprecision(2)<<areaT(t)<<endl;
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
