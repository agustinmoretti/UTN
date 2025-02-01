#include <iostream>
using namespace std;


void cuadrado(int t, char c){
	for(int i=1; i<=t; i++){
		for(int k=1; k<=t; k++){
			cout<<c;
		}
		cout<<endl;
	}
}
	
	void rombo(int t, char c){
		for(int i=1; i<=t; i++){
			for(int k=1; k<=t-i; k++){
				cout<<" ";
			}
			for(int j=1; j<=2*i-1; j++){
				cout<<c;
			}
			cout<<endl;
		}
		for(int i=t-1; i>=1; i--){
			for(int k=1; k<=t-i; k++){
				cout<<" ";
			}
			for(int j=1; j<=2*i-1; j++){
				cout<<c;
			}
			cout<<endl;
		}
	}
		
		void triangulo(int t, char c){
			for(int i=1; i<=t; i++){
				for(int k=1; k<=i; k++){
					cout<<c;
				}
				cout<<endl;
			}
		}

int main(int argc, char *argv[]) {
	int t,n;
	char c;
	
	cin>>n>>t>>c;
	
	switch(n){
		case 1:cuadrado(t,c);
		break;
		
		case 2:rombo(t,c);
		break;
		
		case 3:triangulo(t,c);
		break;
		
		default: cout<<"Ingrese un numero entre 1 y 3."<<endl;
		break;
	}
	return 0;
}

