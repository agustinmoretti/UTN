#include <iostream>
#include <cstring> 
using namespace std;

int main(int argc, char *argv[]) {
	char cadena[50],*inicio, *fin;
	
	cout<<"Ingrese una cadena cualquiera: ";
	cin.getline(cadena, 50);
	
	inicio=cadena;
	fin=cadena+(strlen(cadena)-1);
	
	cout<<"Cadena original: "<<endl;
	for(int i=0; i<strlen(cadena); i++){
		cout<<cadena[i];
	}
	cout<<endl;
	
	while(inicio < fin){
		char temp = *inicio;
		*inicio = *fin;
		*fin = temp;
		
		inicio++;
		fin--;
	}
	
	cout<<"Cadena invertida: "<<endl;
	for(int i=0; i < strlen(cadena); i++){
		cout<<cadena[i];
	}

	return 0;
}

