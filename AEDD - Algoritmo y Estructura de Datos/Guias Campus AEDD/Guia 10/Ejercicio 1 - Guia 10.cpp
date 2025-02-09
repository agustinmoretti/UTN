#include <iostream>
#define T 30
using namespace std;

void dosListasJuntas(int A[], int B[], int C[], int a, int b){
	
	for(int i=0; i<a;i++){
		C[i]=A[i];
	}
	for(int i=0; i<b;i++){
		C[a+i]=B[i];
	}
}
int main(int argc, char *argv[]) {
	int A[T], B[T], C[T];
	int a, b;
	
	cout<<"Ingrese el tamaño del arreglo A: "<<endl;
	cin>>a;
	cout<<"Ingrese el tamaño del arreglo B: "<<endl;
	cin>>b;
	
	for(int i=0; i<a; i++){
		cout<<"Ingrese el valor de la posicion "<<i<<" del arreglo A: "<<endl;
		cin>>A[i];
	}
	for(int i=0; i<b; i++){
		cout<<"Ingrese el valor de la posicion "<<i<<" del arreglo B: "<<endl;
		cin>>B[i];
	}
	dosListasJuntas(A, B, C, a, b);
	for(int i=0; i<(a+b); i++){
		cout<<"C["<<i<<"] = "<<C[i]<<endl;
	}
	
	return 0;
}

