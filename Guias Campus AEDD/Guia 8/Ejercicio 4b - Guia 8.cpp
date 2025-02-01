#include <iostream>
using namespace std;

int suma(int n){
	if(n==2)return n;
	if(n%2!=0){
		n=n-1;
	}
	return n+suma(n-2);
}
int main(int argc, char *argv[]) {
	int n;
		
	cin>>n;
	cout<<suma(n)<<endl;
	return 0;
}

