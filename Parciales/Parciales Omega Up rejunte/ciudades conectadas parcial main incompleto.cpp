#include <iostream>
using namespace std;

struct ciudad{
	int codigo;
	char nombre[30];
	int hab;
	int sector;
};
struct nodo{//representa a la ciudad con sus datos
	ciudad info;
	nodo* sig;
};
nodo* itemB(nodo* l1, nodo* l2, int x, int cant){
	nodo* aux1=l1;
	nodo* aux2=l2;
	nodo* listaFinal=NULL;
	nodo* nuevo=NULL;
	
	while(x>0 and (aux1!=NULL or aux2!=NULL)){
		if(aux1!=NULL and aux1->info.hab > cant){
			nuevo = new nodo;
			*nuevo=*aux1;
			nuevo->sig=listaFinal;
			listaFinal=nuevo;
			aux1=aux1->sig;
			x--;
		}
		if(aux2!=NULL and aux2->info.hab > cant){
			nuevo = new nodo;
			*nuevo=*aux2;
			nuevo->sig=listaFinal;
			listaFinal=nuevo;
			aux2=aux2->sig;
			x--;
		}
	}
	return listaFinal;
}
void itemC(nodo* l1, nodo* l2, nodo* &resultado, int x, int cant, int &sur, int &centro, int &norte){
	nodo* aux1=l1;
	nodo* aux2=l2;
	nodo* nuevo=NULL;
	
	while(x>0 and (aux1!=NULL or aux2!=NULL)){
		if(aux1!=NULL and aux1->info.hab > cant){
			nuevo = new nodo;
			*nuevo=*aux1;
			nuevo->sig=resultado;
			resultado=nuevo;
			aux1=aux1->sig;
			x--;
			
			if (aux1->info.sector == 0) sur += aux1->info.hab;
			else if (aux1->info.sector == 1) centro += aux1->info.hab;
			else if (aux1->info.sector == 2) norte += aux1->info.hab;
		}
		if(aux2!=NULL and aux2->info.hab > cant){
			nuevo = new nodo;
			*nuevo=*aux2;
			nuevo->sig=NULL;
			
			if(resultado==NULL or resultado->info.hab <= nuevo->info.hab){
				nuevo->sig=resultado;
				resultado=nuevo;
			}else{
				nodo* temp=resultado;
				while(temp->sig!=NULL and temp->sig->info.hab > nuevo->info.hab){
					temp=temp->sig;
				}
				nuevo->sig=temp;
				temp=nuevo;
			}
			if (aux2->info.sector == 0) sur += aux2->info.hab;
			else if (aux2->info.sector == 1) centro += aux2->info.hab;
			else if (aux2->info.sector == 2) norte += aux2->info.hab;
			
			x--;
		}
	}
}
int main(int argc, char *argv[]) {
	nodo* start=NULL;
	
	
	
	
	return 0;
}

