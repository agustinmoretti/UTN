#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void sumaProm(int V[]){
	int suma=0;
	float prom=0;
	
	for(int i=0; i<5; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
	for(int i=0; i<5; i++){
		suma+=V[i];
	}
	prom=suma/5;
	
	cout<<"La suma de todos los valores es "<<suma<<endl;
	cout<<"El promedio de todos los valores es "<<fixed<<setprecision(2)<<prom<<endl;
}
int main(int argc, char *argv[]) {
	int V[5];
	
	srand(time(NULL));
	for(int i=0; i<5; i++){
		V[i]=rand();
	}
	sumaProm(V);
	return 0;
}

