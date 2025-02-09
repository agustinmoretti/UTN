#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string frase;
	int contCaracteres=0, contPalabras=0;
	
	cout<<"Ingrese una frase: ";
	getline(cin, frase);
	
	contCaracteres=frase.length();
	
	int n=contCaracteres-(contCaracteres-1);
	bool puntoFinal=(frase[n]=='.');
	while(puntoFinal){
		int i=0;//espacio=frase.find(' ');
		if(frase[i]==' ' and frase[i+1] != ' ' and i+1 < frase.length()){
			contPalabras++;
		}
		i++;
	}
	contPalabras++;
	
	cout<<"Palabras: "<<contCaracteres<<endl;
	cout<<"Caracteres: "<<contCaracteres<<endl;
	
	return 0;
}

