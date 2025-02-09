#include <iostream>
using namespace std;

void invertir(int& a){
	int aux=0, resto=0;
	if(a>=10){
		resto=a%10;
		aux=a/10;
		a=(resto*10)+aux;
	}
	cout<<a<<endl;
}
int main(int argc, char *argv[]) {
	int a;
	
	cin>>a;
	invertir(a);
	
	return 0;
}

