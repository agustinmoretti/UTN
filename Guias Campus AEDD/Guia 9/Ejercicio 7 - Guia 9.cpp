#include <iostream>
using namespace std;

bool sonTodosIguales(int V[]){
	int primerValor=V[0], cont=1;
	
	for(int i=1; i<5; i++){
		if(primerValor==V[i]){
			cont++;
		}
	}
	if(cont==5)return true;
	else return false;
}
int main(int argc, char *argv[]) {
	int V[5];
	for(int i=0; i<5; i++){
		cin>>V[i];
	}
	if(sonTodosIguales(V)){
		cout<<"Son todos los valores iguales"<<endl;
	}else{
		cout<<"No son todos los valores iguales"<<endl;
	}
	return 0;
}

