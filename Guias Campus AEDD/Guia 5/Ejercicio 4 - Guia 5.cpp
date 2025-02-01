#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, h, l;//h=altura l=largo
	char a;
	
	cout<<"Seleccione la figura que desea crear:"<<endl;
	cout<<"1. Triangulo"<<endl;
	cout<<"2. Cuadrado"<<endl;
	cout<<"3. Rectangulo"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Ingrese su opcion (1-4): ";
	cin>>n;
	
	switch(n){
		
		case 1:cout<<"Ingrese la altura del triangulo: ";
			cin>>h;
			cout<<"Ingrese el caracter para dibujar la figura: ";
			cin>>a;
			
			for(int i=1; i<=h; i++){
				for(int k=1; k<=i; k++){
					cout<<a;
				}
				cout<<endl;
			}
			break;
		case 2:cout<<"Ingrese la altura del cuadrado:";
			cin>>h;
			cout<<"Ingrese el caracter para dibujar la figura: ";
			cin>>a;
			
			for(int i=1; i<=h; i++){
				for(int k=1; k<=h; k++){
					cout<<a;
				}
				cout<<endl;
			}
			break;
		case 3: cout<<"Ingrese la altura del rectangulo:";
			cin>>h;
			cout<<"Ingrese el largo del rectangulo:";
			cin>>l;
			cout<<"Ingrese el caracter para dibujar la figura: ";
			cin>>a;
			
			for(int i=1; i<=h; i++){
				for(int k=1; k<=l; k++){
					cout<<a;
				}
				cout<<endl;
			}
			break;
		case 4:
			break;
		default:cout<<"Opcion no valida. Intente de nuevo."<<endl;
			break;
	}
	
	
	
	return 0;
}

