#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void encontrarElMayor(int V[]){
	int valorMayor=V[0];
	int posMayor=0;
	
	for(int i=0; i<5; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
	for(int i=1; i<5; i++){
		if(V[i]>valorMayor){
			valorMayor=V[i];
			posMayor=i;
		}
	}
	cout<<"El valor mayor es "<<valorMayor<<" y su posicion en el vector es "<<posMayor<<endl;
}
int main(int argc, char *argv[]) {
	int V[5];
	
	srand(time(NULL));
	for(int i=0; i<5; i++){
		V[i]=rand();
	}
	encontrarElMayor(V);
	return 0;
}

