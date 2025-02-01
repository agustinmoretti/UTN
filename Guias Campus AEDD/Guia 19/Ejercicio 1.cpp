#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1=3.1415926, num2=0.12345, *pnum;
	//asigna la direccion de memoria de num1
	pnum=&num1;
	//imprime el valor de num1
	cout<<"Valor de num1: "<<*pnum<<endl;
	//asigna el valor de num2
	num2=*pnum;
	//imprime el valor de num2
	cout<<"Valor de num2: "<<*pnum<<endl;
	//imprime la direccion de memoria de num2 y la direccion almacenada en pnum
	cout<<"Direccion de memoria de num2: "<<&num2<<endl;
	cout<<"Direccion de memoria almacenada en pnum: "<<pnum<<endl;
	//no van a tener la misma dir de memo porque pnum tiene almacenada la direccion
	//de num1, la cual es distinta de la de num2
	return 0;
}

