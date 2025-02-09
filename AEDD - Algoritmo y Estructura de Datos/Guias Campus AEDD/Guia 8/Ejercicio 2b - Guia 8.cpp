#include <iostream>
using namespace std;

int cantDigPares(int n){
	if(n==0){
		return 0;
	}
	int ultimoDig=n%10;
	bool esPar=(ultimoDig%2==0);
	
	return esPar+cantDigPares(n/10);
}
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<cantDigPares(n)<<endl;
	return 0;
}

