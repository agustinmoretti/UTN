#include <iostream>
#include<cstring>
using namespace std;

struct coordenada{
	float x;
	float y;
};
struct informacion{
	char nombre[50];
	coordenada c;
	int numReg;
};
struct nodo{
	informacion info;
	nodo* sig;
};
void eliminarNodo(nodo* l, int valor){
	nodo* aux;
	nodo* anterior=l;
	nodo* actual=l->sig;
	
	if(l->info.numReg == valor){
		aux=l;
		l=l->sig;
		delete aux;
	}else{		
		while(actual!=NULL and actual->info.numReg!=valor){
			anterior=actual;
			actual=actual->sig;
		}
		if(actual!=NULL){
			aux=actual;
			anterior->sig=actual->sig;
			delete aux;
		}
	}
}
void nombreMasBajo(nodo* l){
	int registroMasBajo=0;
	nodo* aux=l;
	nodo* menor=aux;
	
	registroMasBajo=aux->info.numReg;
	aux=aux->sig;
	
	while(aux!=NULL){
		if(aux->info.numReg<registroMasBajo){
			registroMasBajo=aux->info.numReg;
			menor=aux;
		}
		aux=aux->sig;
	}
	cout<<"Nombre de la ciudad con el registro mas bajo: "<<menor->info.nombre<<endl;
}
bool estaOrdenada(nodo* l){
	nodo* actual=l;
	if (l==NULL or l->sig==NULL) {
		return true; // Lista vacía o con un solo elemento está ordenada
	}
	
	while(actual->sig!=NULL){
		if(strcmp(actual->info.nombre, actual->sig->info.nombre) > 0){
			return false;
		}
		actual=actual->sig;
	}
	return true;
}
void eliminarCiudades(nodo* & l){
	nodo* aux=l;
	
	while(aux!=NULL){
		if(aux->info.c.y < 0){
			cout<<"La cuidad con numero de registro: "<<aux->info.numReg<<" fue eliminada porque su abcisa es menor a cero."<<endl;
			eliminarNodo(l, aux->info.numReg);
			aux=l;
		}else{
			cout<<"No se elimino esta ciudad."<<endl;
			aux = aux->sig;
		}
	}
}
int main(int argc, char *argv[]) {
	nodo* nodo1 = new nodo;
	nodo* nodo2 = new nodo;
	nodo* nodo3 = new nodo;
	//asignar valores al primer nodo
	strcpy(nodo1->info.nombre, "Ciudad1");
	nodo1->info.c.x = { 1.0 };
	nodo1->info.c.y = { 2.0 };
	nodo1->info.numReg = 2;
	nodo1->sig = nodo2;
	// Asignar valores al segundo nodo
	strcpy(nodo2->info.nombre, "Ciudad2");
	nodo2->info.c.x = { 2.0 };
	nodo2->info.c.y = { -2.0 };
	nodo2->info.numReg = 5;
	nodo2->sig = nodo3;
	
	// Asignar valores al tercer nodo
	strcpy(nodo3->info.nombre, "Ciudad3");
	nodo3->info.c.x = { 3.0 };
	nodo3->info.c.y = { 3.0 };
	nodo3->info.numReg = 15;
	nodo3->sig = NULL;
	
	nombreMasBajo(nodo1);
	if(estaOrdenada(nodo1)){
		cout<<"La lista esta ordenada alfabeticamente por nombre de ciudad."<<endl;
	}else{
		cout<<"La lista no esta ordenada alfabeticamente por nombre de ciudad."<<endl;
	}
	eliminarCiudades(nodo1);
	
	delete nodo1;
	delete nodo2;
	delete nodo3;
	
	return 0;
}

