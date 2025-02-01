#include <iostream>
using namespace std;

struct Nodo{
	int info;
	Nodo* sig;
};
typedef Nodo* lista;

void inicializar(lista & l){
	l = NULL;
}
void imprimirLista(lista l){
	while(l!=NULL){
		cout<<l->info<<" -> ";
		l=l->sig;
	}
	cout<<"NULL"<<endl;
}
void insertar(lista & l, int valor){
	if(l == NULL){//significa que es el primer nodo a agregar
		l = new Nodo;
		if(l != NULL){
			l -> info = valor; //asigna el valor c a el nodo
			l -> sig = NULL;
		}
		else{
			cout<<"No hay memoria para alojar un nuevo nodo"<<endl;
		}
	}
	else{//la lista no estaba vacia, por lo que debemos buscar
		lista aux = l;
		while(aux ->sig!=NULL){
			aux = aux -> sig;
		}
		aux -> sig = new Nodo;
		if(aux -> sig !=NULL){
			aux = aux -> sig;
			aux -> info = valor;
			aux -> sig = NULL;
		}
		else{
			cout<<"No hay memoria para alojar un nuevo nodo"<<endl;
		}
	}
}
bool repite(lista l, int valor){
	while(l!=NULL){
		if(l->info==valor){
			return true;
		}
		l=l->sig;
	}
	return false;
}
void unirLista(lista& a, lista b){
	while(b!=NULL){
		if(!repite(a, b->info)){
			insertar(a, b->info);
		}
		b=b->sig;
	}
}
int main(int argc, char *argv[]) {
	lista a, b, c;
	
	inicializar(a);
	inicializar(b);
	inicializar(c);
	
	insertar(a, 2);
	insertar(a, 25);
	insertar(a, 45);
	insertar(a, 85);
	insertar(b, 2);
	insertar(b, 34);
	
	imprimirLista(a);
	imprimirLista(b);
	
	unirLista(c, a);
	unirLista(c, b);
	imprimirLista(c);
	
	return 0;
}

