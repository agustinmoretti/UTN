#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream archivo;
	archivo.open("archivo.txt", ios::in); 
	int contPalabras=0, palabraMasLarga=0, contPalabrasConLetras=0;
	char primeraLetra, ultimaLetra;
	string palabra;
	
	if(!archivo.is_open()){ // Verifica si el archivo se abrió correctamente
		cout<<"Error al abrir el archivo."<<endl;
		return 1;
	}
	
	cout<<"Ingrese la primera letra(en minuscula): ";
	cin>>primeraLetra;
	cout<<"Ingrese la ultima letra(en minuscula): ";
	cin>>ultimaLetra;
	
	while(archivo>>palabra){
		contPalabras++;
		
		if(palabraMasLarga<palabra.length()){
			palabraMasLarga=palabra.length();
		}
		if((palabra[0]==primeraLetra) and (palabra[palabra.length()-1]==ultimaLetra)){
			contPalabrasConLetras++;
		}
	}
	archivo.close();
	
	cout<<"Cantidad de palabras: "<<contPalabras<<endl;
	cout<<"Palabra mas larga: "<<palabraMasLarga<<endl;
	cout<<"Cantidad de palabras que empiezan con "<<primeraLetra<<" y termina con "<<ultimaLetra<<": "<<contPalabrasConLetras<<endl;
	
	return 0;
}
