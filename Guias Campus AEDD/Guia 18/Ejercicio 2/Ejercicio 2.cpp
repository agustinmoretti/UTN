#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream original;
	original.open("original.txt",ios::in); 
	ofstream enclave;
	enclave.open("enclave.txt",ios::out);
	
	int numAscii=0;
	char caracter, charClave;
	
	if(!original.is_open()){ // Verifica si el archivo se abrió correctamente
		cout<<"Error al abrir el archivo."<<endl;
		return 1;
	}
	if (!enclave.is_open()) { // Verifica si el archivo de clave se abrió correctamente
		cout << "Error al crear el archivo de clave." << endl;
		return 1;
	}
	
	cout<<"Ingrese la cantidad que desea sumarle: ";
	cin>>numAscii;
	
	while(original.get(caracter)){
		charClave=caracter + numAscii;
		enclave<<charClave;
	}
	original.close();
	enclave.close();
	return 0;
}

