#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a[10]={1,3,4,5,2,23,4,24,53,13}, *b[10];
	
	for(int i=0;i<10;i++){
		b[i]=&a[i];
	}
	
	cout<<"Valores del arreglo a: "<<endl;
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Valores del arreglo de punteros b: "<<endl;
	for(int i=0;i<10;i++){
		cout<<*b[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

