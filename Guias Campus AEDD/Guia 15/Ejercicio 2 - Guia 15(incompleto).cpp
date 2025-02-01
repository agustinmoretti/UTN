#include <iostream>
#include <string>
using namespace std;

struct palabra{
	string termino;
	int catGramatical;
	string definiciones[5];
};
struct diccionario{
	palabra palabras[10000];
	int tl;
};
int cantidadDeArticulos(diccionario d){//d=diccionario
	int cont=0;
	for(int i=0;i<d.tl;i++){
		if(d.palabras[i].catGramatical==2)cont++;
	}
	return cont;
}
bool encontrarPalabra(diccionario d, string t){//t=termino
	bool terminoEncontrado=false;
	for(int i=0;i<d.tl;i++){
		if(d.palabras[i].termino==t)terminoEncontrado=true;
	}
	return terminoEncontrado;
}
void intercambio(string& a, string& b){
	string aux=a;
	a=b;
	b=aux;
}
void ordenarPalabras(diccionario& d){
	int pasada=1,k,intercambios=1;
	
	while(pasada < d.tl and intercambios){
		intercambios=0;
		for(k=0;k < d.tl-pasada;k++){
			if(d.palabras[k].termino > d.palabras[k+1].termino){
				intercambio(d.palabras[k], d.palabras[k+1]);
				intercambios=1;
			}
		}
		pasada+=1;
	}
}
bool agregarPalabra(diccionario& d, palabra p){//p=palabra
	d.tl++;
	d.palabras[d.tl]=p;
	ordenarPalabras(d);
	
	return true;
}
void cargarEnMatriz(string m[][26]){
	for(int i=0;i<26;i++){
		for(int j=0;j<5;j++){
			m[i][j]=0;
		}
	}
	
	for(int i=0;i<d.){
		
	}
}

int main(int argc, char *argv[]) {
	
	return 0;
}

