#include <iostream>
using namespace std;

void imprimir_vector(int V[], int n){
	for(int i=0; i<n; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
}
int main(int argc, char *argv[]) {
	const int n=6;
	int V[n];
	
	for(int i=0; i<n; i++){
		cout<<"Introduzca el valor que guste en la posicion "<<i<<" del vector: "<<endl;
		cin>>V[i];
	}
	imprimir_vector(V, n);
	return 0;
}

