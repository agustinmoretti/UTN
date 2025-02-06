#include <iostream>
using namespace std;

struct nodo{//tipo calificaciones
	int idAlumno;
	int notas[6];
	nodo* sig;
};

struct nodoIntegrada{
	int idAlumno;
	double promedio;
	nodoIntegrada* sig;
};

void imprimirLista(nodo* l);
void imprimirListaIntegrada(nodoIntegrada* l);
void insertarInfo(nodo* &l, int id, int n[]);
void insertar(nodoIntegrada* &l, double prom);
double promedio(int v[]);
void integrarListas(nodo* l1, nodo* l2, nodoIntegrada* &l3);

int main(int argc, char *argv[]) {
	nodo* lista1 = NULL, *lista2 = NULL;
	nodoIntegrada* lista3 = NULL;
	
	int n1[] = {8, 7, 9, 6, 8, 7};
	insertarInfo(lista1, 345634, n1);
	int n2[] = {6, 5, 7, 6, 7, 6};
	insertarInfo(lista1, 349634, n2);
	int n3[] = {4, 7, 9, 6, 3, 7};
	insertarInfo(lista1, 369634, n3);
	int n4[] = {1, 7, 8, 6, 2, 5};
	insertarInfo(lista1, 333334, n4);
	int n5[] = {9, 9, 1, 6, 8, 8};
	insertarInfo(lista2, 311134, n5);
	int n6[] = {7, 7, 7, 7, 7, 7};
	insertarInfo(lista2, 343639, n6);
	int n7[] = {8, 3, 9, 6, 8, 3};
	insertarInfo(lista2, 375796, n7);
	
	cout<<"Lista 1: "<<endl;
	imprimirLista(lista1);
	cout<<endl;
	
	cout<<"Lista 2: "<<endl;
	imprimirLista(lista2);
	cout<<endl;
	
	integrarListas(lista1, lista2, lista3);
	
	cout<<"Lista Integrada: "<<endl;
	imprimirListaIntegrada(lista3);
	
	return 0;
}

void imprimirLista(nodo* l){
	while(l!=NULL){
		cout<<"Alumno: "<<l->idAlumno<<", Notas: ";
		for(int i=0; i<6; i++){
			cout<<l->notas[i]<<" ";
		}
		cout<<" -> ";
		l=l->sig;
	}
	cout<<"NULL"<<endl;
}

void imprimirListaIntegrada(nodoIntegrada* l){
	while(l!=NULL){
		cout<<"Alumno: "<<l->idAlumno<<", Promedio: "<<l->promedio<<" -> ";
		l=l->sig;
	}
	cout<<"NULL"<<endl;
}
	
void insertar(nodoIntegrada* &l, int id, double prom){
	nodoIntegrada* aux = l, *nuevo = new nodoIntegrada;
	
	nuevo->idAlumno = id;
	nuevo->promedio = prom;
	nuevo->sig = NULL;
	
	if(l == NULL or l->promedio < prom){
		nuevo->sig = l;
		l = nuevo;
	}else{
		while(aux->sig != NULL and aux->sig->promedio >= prom){
			aux = aux->sig;
		}
		nuevo->sig = aux->sig;
		aux->sig = nuevo;
	}
}

void integrarListas(nodo* l1, nodo* l2, nodoIntegrada* &l3){
	nodo* aux1 = l1, *aux2 = l2;
	double prom = 0;
	
	while(aux1 != NULL){
		prom = promedio(aux1->notas);
		insertar(l3, aux1->idAlumno, prom);
		aux1 = aux1->sig;
	}
	
	while(aux2 != NULL){
		prom = promedio(aux2->notas);
		insertar(l3, aux2->idAlumno, prom);
		aux2 = aux2->sig;
	}
}

double promedio(int v[]){
	int suma = 0;
	
	for(int i=0; i<6; i++){
		suma+=v[i];
	}
	
	return suma/6.0;
}

void insertarInfo(nodo* &l, int id, int n[]){
	nodo* aux = l, *nuevo = new nodo;
	
	nuevo->idAlumno = id;
	for(int i=0; i<6; i++){
		nuevo->notas[i] = n[i];
	}
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
