#include <iostream>
using namespace std;

struct nodo{
	int num;
	char letra;
	nodo* sig;
};
void funcion(nodo* &l1, nodo* l2){
	nodo* aux1=l1;
	nodo* aux2=l2;
	
	while(aux1!=NULL){
		while(aux2!=NULL){
			if(aux1->num == aux2->num){
				if(aux1->letra == 'z'){
					aux1->letra='a';
				}else{
					aux1->letra=aux1->letra+1;
				}
			}
			aux2=aux2->sig;
		}
		aux2=l2;
		aux1=aux1->sig;
	}
}
	//a fines de póder probarlo
void insertar(nodo* &lista, int num, char letra) {
	nodo* nuevo = new nodo;
	nuevo->num = num;
	nuevo->letra = letra;
	nuevo->sig = NULL;
	
	if (lista == NULL) {
		lista = nuevo;
	} else {
		nodo* aux = lista;
		while (aux->sig != NULL) {
			aux = aux->sig;
		}
		aux->sig = nuevo;
	}
}
void imprimir(nodo* l){
	nodo* aux=l;
	
	while(aux!=NULL){
		cout<<aux->num<<" | "<<aux->letra<<" -> ";
		aux=aux->sig;
	}
	cout<<"NULL"<<endl;
}
int main(int argc, char *argv[]) {
	nodo* lista1=NULL;
	nodo* lista2=NULL;
	
	insertar(lista1, 1, 'a');
	insertar(lista1, 2, 'g');
	insertar(lista1, 3, 'w');
	insertar(lista1, 4, 'z');
	insertar(lista2, 1, 's');
	insertar(lista2, 2, 'd');
	insertar(lista2, 3, 'l');
	insertar(lista2, 4, 'h');
	
	funcion(lista1, lista2);
	
	imprimir(lista1);
	
	return 0;
}

