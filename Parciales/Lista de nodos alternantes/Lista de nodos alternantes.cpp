#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int numero;
	struct Nodo *sig;
};
typedef Nodo * NodoPtr;
void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
void procesados(NodoPtr &l1, NodoPtr a, NodoPtr b);
void Parcial3( NodoPtr &l1, int &paresNoAlternantes );
int main() {
	NodoPtr L1 = NULL;
	int valor, paresNoAlternantes = 0;
	while ( cin >> valor )
		insertar( L1, valor );
	Parcial3( L1, paresNoAlternantes );
	mostrarLista( L1 );
	cout<<paresNoAlternantes<<endl;
	
	return 0;
}
void insertar( NodoPtr & sPtr, int valor ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->numero = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, valor);
}
void procesados(NodoPtr &l1, NodoPtr a, NodoPtr b){
	
	if((a->numero % 2 == 0) and (b->numero % 2 == 0)){
		NodoPtr nuevo = new Nodo;
		
		nuevo->numero = (a->numero + b->numero) + 1;
		a->sig = nuevo;
		nuevo->sig = b;
	}else if((a->numero % 2 == 1) and (a->sig->numero % 2 == 1)){
		if(a->numero >= b->numero){
			a->sig = b->sig;
			delete b;
		}else{
			a->numero = b->numero;
			a->sig = b->sig;
			delete b;
		}
	}
}
void Parcial3( NodoPtr &l1, int &paresNoAlternantes ){
	NodoPtr aux = l1;
	
	while(aux != NULL and aux->sig != NULL){
		if(((aux->numero % 2 == 1) and (aux->sig->numero % 2 == 0)) or ((aux->numero % 2 == 0) and (aux->sig->numero % 2 == 1))){
			aux = aux->sig;
		}else{
			procesados(l1, aux, aux->sig);
			paresNoAlternantes++;
			aux = l1;
		}
	}
}
void mostrarLista( NodoPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->numero << "->";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
