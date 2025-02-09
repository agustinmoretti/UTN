#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int numero;
	char operador;
	struct Nodo *sig;
};
typedef Nodo * NodoPtr;
void insertar( NodoPtr & sPtr, int numero, char operador );
void mostrarLista( NodoPtr actual );
void Parcial3( NodoPtr &l1 );
int main() {
	NodoPtr L1 = NULL;
	int numero;
	char operador;
	while ( cin >> numero >> operador)
		insertar( L1, numero, operador );
	Parcial3( L1 );
	mostrarLista( L1 );
	return 0;
}
void insertar( NodoPtr & sPtr, int numero, char operador ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->numero = numero;
			nuevo->operador = operador;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, numero, operador);
}

void Parcial3( NodoPtr &l1 ){
	NodoPtr temp1, temp2, temp3, nodo1 = l1, nodo2 = nodo1->sig, nodo3 = nodo2->sig;
	
	while(nodo1 != NULL and nodo2 != NULL and nodo3 != NULL){
		NodoPtr nuevo = new Nodo;
		nuevo->operador = '.';
		
		if(nodo2->operador == '+'){
			nuevo->numero = nodo1->numero + nodo3->numero;
		}else if(nodo2->operador == '-'){
			nuevo->numero = nodo1->numero - nodo3->numero;
		}else if(nodo2->operador == '*'){
			nuevo->numero = nodo1->numero * nodo3->numero;
		}else if(nodo2->operador == '/'){
			nuevo->numero = nodo1->numero / nodo3->numero;
		}
		
		if(nodo3->sig != NULL){
			temp1 = nodo1;
			temp2 = nodo2;
			temp3 = nodo3;
			
			l1 = nuevo;
			nuevo->sig = nodo3->sig;
			nodo1 = nuevo;
			nodo2 = nodo1->sig;
			nodo3 = nodo2->sig;
			
			delete temp1;
			delete temp2;
			delete temp3;
		}else{
			delete nodo1;
			delete nodo2;
			delete nodo3;
			l1 = nuevo;
			break;
		}
	}
	l1->sig = NULL;	
}
void mostrarLista( NodoPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->numero << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
