#include <iostream>
using namespace std;

struct alumno{
	int id;
	double calificaciones[6];
};
struct nodo{
	alumno alum;
	nodo* sig;
};
struct nodoIntegrada{
	int idAlum;
	double promedio;
	nodoIntegrada* sig;
};
double promedio(double calificaciones[]){
	double suma=0;
	for(int i=0;i<6;i++){
		suma+=calificaciones[i];
	}
	return suma/6;
}
void insertar(nodoIntegrada* & l, int id, double prom){
	//funcion que inserte los alumnos ordenados por el promedio de menor a mayor
	nodoIntegrada* nuevo = new nodoIntegrada;
	nuevo->idAlum=id;
	nuevo->promedio=prom;
	nuevo->sig=NULL;
	
	if(l==NULL or l->promedio < prom){
		nuevo->sig=l;
		l=nuevo;
	}else{
		nodoIntegrada* aux=l;
		
		while(aux!=NULL and aux->sig->promedio >= prom){
			aux=aux->sig;
		}
		nuevo->sig=aux->sig;
		aux->sig=nuevo;
	}
}
void integrarListas(nodo* c1, nodo* c2, nodoIntegrada* & l){
	nodo* aux=c1;
	double prom;
	
	while(aux!=NULL){
		prom=promedio(aux->alum.calificaciones);
		insertar(l, aux->alum.id, prom);
		aux=aux->sig;
	}
	
	aux=c2;
	while(aux!=NULL){
		prom=promedio(aux->alum.calificaciones);
		insertar(l, aux->alum.id, prom);
		aux=aux->sig;
	}
}
void imprimir(nodoIntegrada* l){
	//imprime la lista l que es enviada como parametro
	nodoIntegrada* aux=l;
	
	while(aux!=NULL){
		cout<<aux->idAlum<<": "<<aux->promedio<<" -> ";
		aux=aux->sig;
	}
}
//funcion que facilita el ingreso de las calificaciones
void insertarCalificacion(nodo*& curso, int id, int calificaciones[]) {
	nodo* nuevo = new nodo;
	nuevo->alum.id = id;
	for (int i = 0; i < 6; i++) {
		nuevo->alum.calificaciones[i] = calificaciones[i];
	}
	nuevo->sig = curso;
	curso = nuevo;
}
int main(int argc, char *argv[]) {
	nodo* curso1=NULL;
	nodo* curso2=NULL;
	nodoIntegrada* lista=NULL;
	
	
	int notas1[] = {8, 7, 9, 6, 8, 7};
	int notas2[] = {6, 5, 7, 6, 7, 6};
	insertarCalificacion(curso1, 123, notas1);
	insertarCalificacion(curso1, 234, notas2);
	
	// Insertar datos de prueba en curso2
	int notas3[] = {9, 8, 9, 9, 8, 9};
	int notas4[] = {7, 6, 7, 6, 7, 7};
	insertarCalificacion(curso2, 345, notas3);
	insertarCalificacion(curso2, 456, notas4);
	
	// Integrar las listas
	integrarListas(curso1, curso2, lista);
	
	// Imprimir la lista integrada
	imprimir(lista);
	
	return 0;
}

