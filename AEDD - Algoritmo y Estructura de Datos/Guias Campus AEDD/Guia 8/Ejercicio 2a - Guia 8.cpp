#include <iostream>
using namespace std;

int cantDigitos(int n){
	if(n>=0 and n<10){
		return 1;
	}
	return 1+cantDigitos(n/10);;
}
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<cantDigitos(n)<<endl;
	return 0;
}

