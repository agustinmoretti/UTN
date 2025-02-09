#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int mayor(int A[],int inf, int sup){
	int valorMayor=A[inf];
	for(int i=inf; i<sup; i++){
		if(valorMayor<A[i]){
			valorMayor=A[i];
		}
	}
	return valorMayor;
}
int main(int argc, char *argv[]) {
	int A[6];
	int inf=0, sup=0;
	
	cout<<"Ingrese un valor inf(>=0) y un valor sup(<6): "<<endl;
	cin>>inf>>sup;
	
	srand(time(NULL));
	for(int i=0; i<6; i++){
		A[i]=rand()%100;
	}
	for(int i=0; i<6; i++){
		cout<<"A["<<i<<"] = "<<A[i]<<endl;
	}
	cout<<"El valor maximo en el rango (A, "<<inf<<", "<<sup<<") es "<<mayor(A, inf, sup)<<endl;
	return 0;
}

