#include <stdlib.h> 
#include <iostream> 
#include <cstdio> 
using namespace std; 
struct NodoLista { 
	int info; 
	NodoLista *sig; 
};
typedef NodoLista * NodoListaPtr;
void insertarFinal( NodoListaPtr *sPtr, int valor ); 
void printLista( NodoListaPtr actual ); 
int Parcial3( NodoListaPtr* sPtr ); 
int main() { 
	NodoListaPtr startPtr = NULL; 
	int item; 
	while ( cin >> item ) 
		insertarFinal( &startPtr, item ); 
	cout << Parcial3( &startPtr ) << endl; 
	printLista( startPtr ); 
	return 0; 
}
void insertarFinal( NodoListaPtr *sPtr, int valor ) { 
	NodoListaPtr nuevo; 
	if (*sPtr == NULL) { 
		nuevo = new NodoLista; 
		if ( nuevo != NULL ) { 
			nuevo->info = valor; 
			nuevo->sig = NULL; 
			*sPtr = nuevo;
		} else 
			cout << "No hay espacio"; 
	} else 
		insertarFinal (&(*sPtr)-> sig,valor); 
} 
int Parcial3( NodoListaPtr* sPtr ){
	int cantInsertados=0;
	NodoListaPtr nuevo;
	NodoListaPtr actual=*sPtr;
	NodoListaPtr temp=*sPtr;
	NodoListaPtr anterior=NULL;
	
	if(actual!=NULL){
		if((actual->info)%2!=0){
			nuevo=new NodoLista;
			nuevo->info=-1;
			nuevo->sig=actual;
			
			temp=nuevo;
			cantInsertados++;
		}
		
		anterior=actual;
		actual=actual->sig;
		
		while(actual!=NULL){
			if((actual->info)%2!=0){
				cantInsertados++;
				nuevo=new NodoLista;
				nuevo->info=-1;
				
				nuevo->sig=actual;
				anterior->sig=nuevo;
			}
			anterior=actual;
			actual=actual->sig;
		}
		*sPtr=temp;
	}
	
	return cantInsertados;
} 
void printLista( NodoListaPtr actual ) { 
	while ( actual != NULL ) { 
		cout << actual->info << " -> "; 
		actual = actual->sig; 
	} 
	cout << "NULL" << endl; 
}

