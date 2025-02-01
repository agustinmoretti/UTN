#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, par=0,impar=0,positivo=0, negativo=0;
	
	for(int i=1; i<=5; i++){
		cin>>n;
		
		if(n%2==0){
			par++;
		}else{
			impar++;
		}
		if(n>0){
			positivo ++;
		}else if(n<0){
			negativo++;
		}
	}
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<positivo<<" valor(es) positivo(s)"<<endl;
	cout<<negativo<<" valor(es) negativo(s)"<<endl;
	
	return 0;
}

