#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, i=1;
	
	cout<<"Ingrese un numero entero positivo: "<<endl;
	cin>>n;
	
	while(n>=i){
		if(n%i==0){
			cout<<i<<endl;
		}
		i++;
	}
	return 0;
}

