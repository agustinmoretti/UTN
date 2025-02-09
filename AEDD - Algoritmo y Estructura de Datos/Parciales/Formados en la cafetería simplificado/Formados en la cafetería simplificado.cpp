#include <stdlib.h>
#include <iostream>
using namespace std;
// definicion de tipos de datos...
struct Cola {
	string info[100];
	int Primero, Ultimo;
};
struct Nodo {
	string nombre;
	struct Nodo *sig;
};

bool estaVacia(Nodo* l) {
	return (l == NULL);  
}

void insertarNodo(Nodo* &l, string nombre){
	Nodo* aux = l, *nuevo = new Nodo;
	nuevo->nombre = nombre;
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
int main() {
	Nodo* alumnos = NULL, *trabajadores = NULL, *aux;
	int N;
	string evento;
	cin >> N;
	cin.ignore();
	for (int i=1; i<=N; i++){
		getline(cin, evento);
		
		if(evento.find("LLEGA ALUMNO") == 0){
			string nombre = evento.substr(13);
			insertarNodo(alumnos, nombre);
		}else if(evento.find("LLEGA TRABAJADOR") == 0){
			string nombre = evento.substr(17);
			insertarNodo(trabajadores, nombre);
		}else if(evento.find("ATIENDE") == 0){
			if(!estaVacia(trabajadores)){
				cout<<trabajadores->nombre<<endl;
				aux = trabajadores;
				trabajadores = trabajadores->sig;
				delete aux;
			}else if(!estaVacia(alumnos)){
				cout<<alumnos->nombre<<endl;
				aux = alumnos;
				alumnos = alumnos->sig;
				delete aux;
			}
		}
	}
	return 0;
}
