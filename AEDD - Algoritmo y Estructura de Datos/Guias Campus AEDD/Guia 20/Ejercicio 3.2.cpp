#include <iostream>
#include <cstring>
using namespace std;

struct nodo{
	char nombre[50];
	float x;
	float y;
	int numReg;
	nodo* sig;
};

void insertarElemento(nodo* &l, string nombreCiud, float x, float y, int registro);
void borrarElemento(nodo* &nodoActual, int valor);
void imprimirLista(nodo* l);
void registroMasBajo(nodo* l);
bool ordenadaAlfabeticamente(nodo* l);
void ordenadaMenorACero(nodo* &l);

int main(int argc, char *argv[]) {
	nodo* lista = NULL;
	
	insertarElemento(lista, "Ciudad1", 1.2, 2.2, 23);
	insertarElemento(lista, "Ciudad2", 0.7, 3.5, 31);
	insertarElemento(lista, "Ciudad3", -1.1, -2.0, 33);
	insertarElemento(lista, "Ciudad4", 5.6, 0.0, 22);
	insertarElemento(lista, "Ciudad5", 6.1, -3.3, 2);
	insertarElemento(lista, "Ciudad6", 1.1, -1.2, 1);
	insertarElemento(lista, "Ciudad7", 1.3, 3.3, 37);
	insertarElemento(lista, "Ciudad8", 4.1, 2.3, 43);
	
	registroMasBajo(lista);
	
	cout<<endl;
	
	if(ordenadaAlfabeticamente(lista)){
		cout<<"Esta ordenada alfabeticamente."<<endl;
	}else{
		cout<<"No esta ordenada alfabeticamente."<<endl;
	}
	
	cout<<endl;
	
	ordenadaMenorACero(lista);
	
	cout<<endl;
	cout<<"Lista final: "<<endl;
	imprimirLista(lista);
	
	return 0;
}

void registroMasBajo(nodo* l){
	nodo* aux = l;
	int masBajo = 10000;//se inicializa asi para que tome el primer valor de la lista, tambien se lo puede inicializar con el primer numReg de la lista
	string nombreMasBajo;
	
	while(aux != NULL){
		if(aux->numReg < masBajo){
			masBajo = aux->numReg;
			nombreMasBajo = aux->nombre;
		}
		aux = aux->sig;
	}
	
	cout<<"Nombre de la ciudad con el numero de registro mas bajo: "<<nombreMasBajo<<endl;
}

bool ordenadaAlfabeticamente(nodo* l){
	nodo* aux = l;
	
	if (l == NULL or l->sig == NULL) {
		return true; //lista vacía o con un solo elemento está ordenada
	}
	
	while(aux != NULL and aux->sig != NULL){
		if(strcmp(aux->nombre, aux->sig->nombre) > 0){
			return false;
		}
		aux = aux->sig;
	}
	
	return true;
}

void ordenadaMenorACero(nodo* &l){
	nodo* aux = l;
	
	while(aux != NULL){
		if(aux->y < 0){
			cout<<"La ciudad con numero de registro: "<<aux->numReg<<" fue eliminada porque su ordenada es menor a cero."<<endl;
			borrarElemento(l, aux->numReg);
			aux = aux->sig;
		}else{
			cout<<"No se elimino esta ciudad."<<endl;
			aux = aux->sig;
		}
	}
}

void borrarElemento(nodo* &nodoActual, int valor){//borra los nodos con ordenada y<0
	nodo* temp = nodoActual;
	nodo* anterior = NULL;
	
	if (nodoActual == NULL) return;
	
	if(nodoActual->numReg == valor){
		nodoActual = nodoActual->sig;
		delete temp;
	}
	
	while(temp != NULL and temp->numReg != valor){
		anterior = temp;
		temp = temp->sig;
	}
	
	if(temp == NULL){
		cout<<"No se encontro el nodo con ese valor."<<endl;
		return;
	}
	
	anterior->sig = temp->sig;
	delete temp;
}
	
void insertarElemento(nodo* &l, string nombreCiud, float x, float y, int registro){//inserta nodos al final de la lista
	nodo* aux, *nuevo;
	aux = l;
	nuevo = new nodo;
	strcpy(nuevo->nombre, nombreCiud.c_str());
	nuevo->x = x;
	nuevo->y = y;
	nuevo->numReg = registro;
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

void imprimirLista(nodo* l){
	while(l!=NULL){
		cout<<l->nombre<<", reg: "<<l->numReg<<" -> ";
		l=l->sig;
	}
	cout<<"NULL"<<endl;
}
