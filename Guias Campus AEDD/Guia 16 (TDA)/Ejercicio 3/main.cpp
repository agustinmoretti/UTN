#include <iostream>
#include <cstdlib>
#include "circulo.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "triangulo.h"
using namespace std;

int main (int argc, char *argv[]) {
	int opcion;
	circulo c1;
	cuadrado cdo1;
	rectangulo r1;
	triangulo t1;
	
	do{
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"1. Circulo"<<endl;
		cout<<"2. Cuadrado"<<endl;
		cout<<"3. Rectangulo"<<endl;
		cout<<"4. Triangulo"<<endl;
		cout<<"5. Salir del programa"<<endl;
		cout<<"Elija una opcion: ";
		
		cin>>opcion;
		system("cls");
		switch(opcion){
			case 1:
				submenuCirculo(c1);
				system("cls");
			break;
			case 2:
				submenuCuadrado(cdo1);
				system("cls");
			break;
			case 3:
				submenuRectangulo(r1);
				system("cls");
			break;
			case 4:
				submenuTriangulo(t1);
				system("cls");
			break;
			case 5:
				cout<<"Cerrando el programa."<<endl;
			break;
			default:
				cout<<"Opcion no valida, intente nuevamente."<<endl;
			break;
		}
	}while(opcion!=5);
	
	return 0;
}

