#include <iostream>
using namespace std;

bool esPalindromo(int n){
	int invertido=0, digito;
	int aux=n;
	
	while(aux>0){
		digito=aux%10;
		invertido=(invertido*10) + digito;
		aux=aux/10;
	}
	return (n == invertido);
}

int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<esPalindromo(n)<<endl;
	
	return 0;
}

