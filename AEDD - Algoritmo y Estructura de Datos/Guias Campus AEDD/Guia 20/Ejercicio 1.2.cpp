#include <iostream>
using namespace std;

struct Nodo{
	int info;
	Nodo* sig;
};

void insertarNodo(Nodo* & l, int valor);
bool repetido(Nodo* l, int valor);
void unirListas(Nodo* l1, Nodo* l2, Nodo* & l3);
void imprimirLista(Nodo* l);

int main(int argc, char *argv[]) {
	Nodo* l1 = NULL, *l2 = NULL, *l3 = NULL;
	
	insertarNodo(l1, 222);
	insertarNodo(l1, 353);
	insertarNodo(l1, 377);
	insertarNodo(l1, 858);
	insertarNodo(l2, 222);
	insertarNodo(l2, 444);
	insertarNodo(l2, 344);
	insertarNodo(l2, 434);
	
	cout<< "Lista 1: " <<endl;
	imprimirLista(l1);
	cout<< "Lista 2: " <<endl;
	imprimirLista(l2);
	
	unirListas(l1, l2, l3);
	
	cout<< "Lista 3(l1 U l2): " <<endl;
	imprimirLista(l3);
	
	return 0;
}

void insertarNodo(Nodo* & l, int valor){//agrega el nodo al final
	Nodo* aux = l, *nuevo;
	
	//creamos el nodo a agregar y le ponemos sus valores
	nuevo = new Nodo;
	nuevo->info = valor;
	nuevo->sig = NULL;
	
	if(l == NULL){
		l = nuevo;
	}else{
		while(aux->sig != NULL){
			aux = aux->sig;
		}
		aux->sig = nuevo;
	}
}

void unirListas(Nodo* l1, Nodo* l2, Nodo* & l3){
	Nodo* aux1 = l1, *aux2 = l2;
	
	while(aux1 != NULL){
		if(!repetido(l3, aux1->info)){
			insertarNodo(l3, aux1->info);
		}
		aux1 = aux1->sig;
	}
	while(aux2 != NULL){
		if(!repetido(l3, aux2->info)){
			insertarNodo(l3, aux2->info);
		}
		aux2 = aux2->sig;
	}
}

bool repetido(Nodo* l, int valor){
	while(l!=NULL){
		if(l->info==valor){
			return true;
		}
		l=l->sig;
	}
	return false;
}
void imprimirLista(Nodo* l){
	Nodo* temp = l;
	
	while(temp != NULL){
		cout<< temp->info << " -> ";
		temp = temp->sig;
	}
	cout<<"NULL"<<endl;
}
