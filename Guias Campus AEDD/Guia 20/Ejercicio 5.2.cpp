#include <iostream>
using namespace std;

struct nodo{
	int num;
	char letra;
	nodo* sig;
};

void imprimir(nodo* l);
void insertarNodo(nodo* &l, int num, char letra);//inserta los nodos al final
void actualizarLista1(nodo* &l1, nodo* l2);

int main(int argc, char *argv[]) {
	nodo* lista1 = NULL, *lista2 = NULL;
	
	insertarNodo(lista1, 1, 'a');
	insertarNodo(lista1, 2, 'g');
	insertarNodo(lista1, 3, 'w');
	insertarNodo(lista1, 4, 'z');
	insertarNodo(lista1, 89, 's');
	insertarNodo(lista2, 2, 'd');
	insertarNodo(lista2, 3, 'l');
	insertarNodo(lista2, 4, 'h');
	
	cout<<"Lista 1 inicial: "<<endl;
	imprimir(lista1);
	cout<<endl;
	
	cout<<"Lista 2: "<<endl;
	imprimir(lista2);
	cout<<endl;
	
	actualizarLista1(lista1, lista2);
	
	cout<<"Lista 1 actualizada: "<<endl;
	imprimir(lista1);
	
	return 0;
}

void imprimir(nodo* l){
	nodo* aux=l;
	
	while(aux!=NULL){
		cout<<aux->num<<" | "<<aux->letra<<" -> ";
		aux=aux->sig;
	}
	cout<<"NULL"<<endl;
}
void insertarNodo(nodo* &l, int num, char letra){
	nodo* aux = l, *nuevo = new nodo;
	
	nuevo->letra = letra;
	nuevo->num = num;
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
void actualizarLista1(nodo* &l1, nodo* l2){
	nodo* aux1 = l1, *aux2 = l2;
	
	while(aux1 != NULL){
		while(aux2 != NULL){
			if(aux1->num == aux2->num){
				if(aux1->letra == 'z'){
					aux1->letra = aux1->letra - 25;
				}else{
					aux1->letra = aux1->letra + 1;
				}
			}
			aux2 = aux2->sig;
		}
		aux2 = l2;
		aux1 = aux1->sig;
	}
	
}
	
