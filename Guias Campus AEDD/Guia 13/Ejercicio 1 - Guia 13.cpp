#include <iostream>
#include <string>
using namespace std;

string generadorMails(string nombre_apellido){
	int espacio=nombre_apellido.find(' ');
	string letraNombre=nombre_apellido.substr(espacio+1);
	string apellido=nombre_apellido.substr(0, espacio);
	
	letraNombre=letraNombre[0]+32;
	apellido[0]=apellido[0]+32;
	
	string emailCompleto=letraNombre+apellido+"@frsf.utn.edu.ar";
	
	return emailCompleto;
}
int main(int argc, char *argv[]) {
	string nombre_apellido, email;
	
	cout<<"Ingrese su apellido y nombre(en ese orden):"<<endl;
	getline(cin, nombre_apellido);
	
	email=generadorMails(nombre_apellido);
	
	cout<<"E-mail: "<<email<<endl;
	return 0;
}

