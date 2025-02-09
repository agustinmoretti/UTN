#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	
	int X[n];
	
	for(int i=0; i<n; i++){
		cin>>X[i];
	}
	
	int minValor=X[0];
	int minPos=0;
	
	for(int i=1; i<n; i++){
		if(X[i]<minValor){
			minValor=X[i];
			minPos=i;
		}
	}
	cout<<"Menor valor: "<<minValor<< endl;
	cout<<"Posicao: "<<minPos<<endl;
	return 0;
}

