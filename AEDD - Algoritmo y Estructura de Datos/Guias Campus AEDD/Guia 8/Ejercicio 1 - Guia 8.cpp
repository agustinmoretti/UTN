#include <iostream>
using namespace std;

int factorial(int a){
	if(a==0 or a==1){
		return 1;
	}
	return a*factorial(a-1);
}
int main(int argc, char *argv[]) {
	int a;
	
	cin>>a;
	cout<<factorial(a)<<endl;
	return 0;
}

