#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

bool esNum(char c){
	if(c>='0' and c<='9'){
		return true;
	}
	return false;
}
bool esChar(char c){
	if((c>='a' and c<='z') or (c>='A' and c<='Z')){
		return true;
	}
	return false;
}
int main(int argc, char *argv[]) {
	ifstream archivo;
	archivo.open("archivo.txt", ios::in); 
	int contLetras=0, contNum=0;
	char caracter;
	
	if(!archivo.is_open()){ // Verifica si el archivo se abrió correctamente
		cout<<"Error al abrir el archivo."<<endl;
		return 1;
	}
	
	while(archivo.get(caracter)){
		if(esNum(caracter)){
			contNum++;
		}else if(esChar(caracter)){
			contLetras++;
		}
	}
	archivo.close();
	
	cout<<"Cantidad de numeros: "<<contNum<<endl;
	cout<<"Cantidad de letras: "<<contLetras<<endl;
	return 0;
}

