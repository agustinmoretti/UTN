#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void invertido(int V[]){
	cout<<"Invirtiendo..."<<endl;
	
	for(int i=0; i<5/2; i++){
		int aux=V[i];
		V[i]=V[5-1-i];
		V[5-1-i]=aux;
	}
	for(int i=0; i<5; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
}
int main(int argc, char *argv[]) {
	int V[5];
	
	srand(time(NULL));
	for(int i=0; i<5; i++){
		V[i]=rand()%100;
	}
	for(int i=0; i<5; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
	invertido(V);
	return 0;
}

