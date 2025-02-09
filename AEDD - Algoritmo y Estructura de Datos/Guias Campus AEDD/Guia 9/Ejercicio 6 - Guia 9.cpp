#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void cantRepeticiones(int V[], int num){
	int contNum=0;
	for(int i=0; i<10; i++){
		if(V[i]==num){
			contNum++;
		}
	}
	cout<<"El numero "<<num<<" aparece "<<contNum<<" vez(es)."<<endl;
}
int main(int argc, char *argv[]) {
	int V[10];
	int num;
	
	cin>>num;
	srand(time(NULL));
	for(int i=0; i<10; i++){
		V[i]=rand()%11;
	}
	for(int i=0; i<10; i++){
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
	cantRepeticiones(V, num);
	return 0;
}

