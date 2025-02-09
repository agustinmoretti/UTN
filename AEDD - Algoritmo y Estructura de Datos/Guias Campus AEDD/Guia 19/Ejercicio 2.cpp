#include <iostream>
#define SIZE 5
using namespace std;

int main(int argc, char *argv[]) {
	float numeros[SIZE]={0.1, 0.2, 0.3, 0.4, 0.5}, *pnum;
	
	pnum=numeros;
	//imprimir los elementos del arreglo utilizando subíndices de arreglos
	cout<<"Valores del arreglo: "<<endl;
	for(int i=0;i<SIZE;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	//imprimir los elementos del arreglo  pero utilizando únicamente la variable pnum
	cout<<"Valores del arreglo por pnum: "<<endl;
	for(int i=0;i<SIZE;i++){
		cout<<*(pnum+i)<<" ";
	}
	cout<<endl;
	//pnum apunta al principio del arreglo, dirección referenciada por (pnum+3) y su valor
	cout<<"Direccion de memoria (pnum+3): "<<(pnum+3)<<endl;
	cout<<"Valor del arreglo (pnum+3): "<<*(pnum+3)<<endl;
	
	//pnum apunta al cuarto elemento del arreglo (numeros[3]), qué elemento del arreglo apunta (pnum-2)
	pnum=&numeros[3];
	cout<<"Valor del arreglo (pnum-2): "<<*(pnum-2)<<endl;
	
	return 0;
}

