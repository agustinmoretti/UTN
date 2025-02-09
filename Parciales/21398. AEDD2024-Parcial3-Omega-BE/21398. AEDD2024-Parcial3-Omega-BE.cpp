#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int num;
	struct Nodo *sig;
};
typedef Nodo * NodoPtr;
void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
bool Parcial3( NodoPtr &l1 );
int main() {
	NodoPtr L1 = NULL;
	int valor;
	while ( cin >> valor )
		insertar( L1, valor );
	
	if(Parcial3( L1 )){
		cout<<"Lista inicialmente ordenada"<<endl;
	}else{
		mostrarLista( L1 );
	}
	
	return 0;
}
void insertar( NodoPtr & sPtr, int valor ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->num = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, valor);
}
void ordenados(int &a, int &b){
	int temp = 0;
	
	temp = a;
	a = b;
	b = temp;
}
bool Parcial3( NodoPtr &l1 ){
	NodoPtr aux = l1, nuevo = new Nodo;
	int cantParejas = 0;
	bool ordenadaInicialmente = true;
	
	while(aux != NULL and aux->sig != NULL){
		if(aux->num > aux->sig->num){
			ordenados(aux->num, aux->sig->num);
			cantParejas++;
			aux = l1;
			
			ordenadaInicialmente = false;
		}else{
			aux = aux->sig;
		}
	}
	nuevo->num = -cantParejas;
	nuevo->sig = l1;
	l1 = nuevo;
	
	return ordenadaInicialmente;
}
void mostrarLista( NodoPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->num << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
