#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inicializar_teclado(int A[], int n){
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=0; i<n; i++){
		cout<<"A["<<i<<"] = "<<A[i]<<endl;
	}
}

void inicializar_aleatorio(int A[], int n){
	srand(time(NULL));
	for(int i=0; i<n; i++){
		A[i]=rand();
	}
	for(int i=0; i<n; i++){
		cout<<"A["<<i<<"] = "<<A[i]<<endl;
	}
}

int main(int argc, char *argv[]) {
	int opcion;
	const int n=5;
	
	int A[n];
	
	cout<<"Ingrese la opcion en la que desea rellenar el arreglo: "<<endl;
	cout<<"1. Cargar los valores por extension en la declaracion."<<endl;
	cout<<"2. Cargar los valores por teclado."<<endl;
	cout<<"3. Cargar los valores de manera aleatoria."<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:{
			int A[n]={1,2,3,4,6};
			for(int i=0; i<n; i++){
				cout<<"A["<<i<<"] = "<<A[i]<<endl;
			}
			break;
		}
		case 2:{
			inicializar_teclado(A, n);
			break;
		}
		case 3:{
			inicializar_aleatorio(A, n);
			break;
		}
	}
	return 0;
}

