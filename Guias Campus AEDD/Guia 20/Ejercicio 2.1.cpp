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
void insertar(lista & l,int valor){
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
		Nodo* aux = l;
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
void eliminarTramos(lista& l) {
	if(l==NULL or l->sig==NULL) {
		return;
	}
	
	lista actual=l;
	while(actual!=NULL and actual->sig!=NULL){
		if(actual->info > actual->sig->info){
			// Tramo no creciente encontrado: eliminar siguiente nodo
			Nodo* aux=actual->sig;
			actual->sig=aux->sig; // Saltar el nodo incorrecto
			delete aux;             // Liberar memoria del nodo eliminado
		}else{
			actual=actual->sig; // Avanzar al siguiente nodo
		}
	}
}
int main(int argc, char *argv[]) {
	int n, valor=0;
	lista l;
	
	inicializar(l);
	
	cout<<"Ingrese la cantidad de valores que quiere ingresar: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el "<<i<<" valor que quiere ingresar: ";
		cin>>valor;
		
		insertar(l, valor);
	}
	
	eliminarTramos(l);
	
	imprimirLista(l);
	
	return 0;
}

