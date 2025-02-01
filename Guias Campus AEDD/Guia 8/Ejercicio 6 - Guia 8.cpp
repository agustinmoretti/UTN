#include <iostream>
using namespace std;

void decBinario(int n){
	if(n>1)decBinario(n/2);
	
	cout<<n%2;
}
int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	decBinario(n);
	return 0;
}

