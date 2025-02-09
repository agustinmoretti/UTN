#include <iostream>
using namespace std;

bool tieneDigPares(int n){
	int ultimoDig=(n%10);
	if(n==0){
		return 0;
	}
	if(ultimoDig%2==0){
		return true;
	}
	return 	tieneDigPares(n/10);
}
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<tieneDigPares(n)<<endl;
	return 0;
}
