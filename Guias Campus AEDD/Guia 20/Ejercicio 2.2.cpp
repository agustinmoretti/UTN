#include <iostream>
using namespace std;

struct Nodo{
	int info;
	Nodo* sig;
};

void insertarElemento(Nodo* &l, int valor);
void borrarElemento(Nodo* &nodoActual);
void imprimirLista(Nodo* l);

int main(int argc, char *argv[]) {
	Nodo* lista = NULL, *aux;
	
	insertarElemento(lista, 23);
	insertarElemento(lista, 31);
	insertarElemento(lista, 33);
	insertarElemento(lista, 2);
	insertarElemento(lista, 2);
	insertarElemento(lista, 1);
	insertarElemento(lista, 37);
	insertarElemento(lista, 43);
	
	aux = lista;
	
	cout<<"Lista original: "<<endl;
	imprimirLista(lista);
	cout<<endl;
	
	while(lista != NULL and lista->sig != NULL){
		if(lista->info >= lista->sig->info){
			borrarElemento(lista);
		}else{
			lista = lista->sig;
		}
	}
	lista = aux;//volver al inicio de la lista
	
	cout<<"Lista modificada: "<<endl;
	imprimirLista(lista);
	
	return 0;
}

void borrarElemento(Nodo* &nodoActual){//borra los nodos elegidos
	Nodo* temp;
	
	if (nodoActual == NULL or nodoActual->sig == NULL) return;
	
	temp = nodoActual->sig;
	nodoActual->sig = temp->sig;//saltea el nodo a eliminar
	delete temp;
}

void insertarElemento(Nodo* &l, int valor){//inserta nodos al final de la lista
	Nodo* aux, *nuevo;
	aux = l;
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
	
void imprimirLista(Nodo* l){
	while(l!=NULL){
		cout<<l->info<<" -> ";
		l=l->sig;
	}
	cout<<"NULL"<<endl;
}
