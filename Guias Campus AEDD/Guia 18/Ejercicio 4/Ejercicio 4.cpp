#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream archivoB;
	archivoB.open("archivo.bin", ios:: binary); 
	ofstream archivo;
	archivo.open("archivo.bin", ios:: binary); 
	int valorMaximo=0, numRand=0;
	
	if(!archivo.is_open()){ // Verifica si el archivo se abrió correctamente
		cout<<"Error al abrir el archivo binario."<<endl;
		return 1;
	}
	srand(time(NULL));
	
	cout<<"Ingrese el valor maximo del intervalo de valores: ";
	cin>>valorMaximo;
	
	numRand=rand()%valorMaximo;
	archivo.write((char*)&numRand, sizeof(numRand));
	
	cout<<"Valores ingresados."<<endl;
	
	while(!archivoB.eof()){
		archivoB.read((char*)&numRand, sizeof(numRand));
		cout<<numRand<<endl;
	}
	archivo.close();
	archivoB.close();
	return 0;
}

