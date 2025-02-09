#include <iostream>
using namespace std;

bool esDigito(int n){
	if(n>=0 and n<10){
		return true;
	}
	return false;
}
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<esDigito(n)<<endl;
	
	return 0;
}

