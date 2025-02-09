#include <iostream>
using namespace std;

int cantDigitos(int n){
	int cont=0;
	
	while(n>=10){
		cont++;
		n=n/10;
	}
	return cont+1;
}
	
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	
	cout<<cantDigitos(n)<<endl;
	return 0;
}

