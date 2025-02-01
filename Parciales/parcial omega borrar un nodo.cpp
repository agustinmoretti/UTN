#include <stdlib.h> 
#include <iostream> 
#include <cstdio> 
using namespace std; 

struct NodoLista { 
	int info; 
	struct NodoLista *sig; 
}; 

typedef NodoLista * NodoListaPtr;

void insertar(NodoListaPtr *sPtr, int valor); 
void mostrarLista(NodoListaPtr actual); 
void Parcial4(NodoListaPtr *sPtr); 

int main() { 
	NodoListaPtr startPtr = NULL; 
	int item; 
	
	while (cin >> item) 
		insertar(&startPtr, item); 
	
	Parcial4(&startPtr); 
	mostrarLista(startPtr); 
	
	return 0; 
} 

void insertar(NodoListaPtr *sPtr, int valor) { 
	NodoListaPtr nuevo; 
	
	if (*sPtr == NULL) { 
		nuevo = new NodoLista; 
		if (nuevo != NULL) { 
			nuevo->info = valor; 
			nuevo->sig = NULL; 
			*sPtr = nuevo;
		} else { 
			cout << "No hay espacio"; 
		}
	} else { 
		insertar(&(*sPtr)->sig, valor); 
	}
} 

void Parcial4(NodoListaPtr *sPtr) { 
	NodoListaPtr aux;
	int contParejas=0, contImpares=0;
	
	if(*sPtr != NULL){
		NodoListaPtr actual=*sPtr;
		NodoListaPtr proximo=actual->sig;
		while(proximo!=NULL){
			if((actual->info%2!=0) and (proximo->info%2!=0)){
				contParejas++;
				aux=proximo;
				
				actual->info=actual->info + proximo->info;
				
				proximo=proximo->sig;
				actual->sig=proximo;
				
				delete aux;
			}else{
				actual=proximo;
				proximo=proximo->sig;
			}
		}
		
		actual=*sPtr;
		while(actual!=NULL){
			if(actual->info%2!=0){
				contImpares++;
			}
			actual=actual->sig;
		}
	}
	cout<<contParejas<<" "<<contImpares<<endl;
} 

void mostrarLista(NodoListaPtr actual) { 
	while (actual != NULL) { 
		cout << actual->info << " -> "; 
		actual = actual->sig; 
	} 
	cout << "NULL" << endl; 
}


