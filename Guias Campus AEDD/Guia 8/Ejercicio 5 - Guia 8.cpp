#include <iostream>
using namespace std;

int inverso(int n){
	int ultdig=0;
	if(n==0){
		return 0;
	}
	ultdig=n%10;
	inverso(n/10);
	return ultdig;
}
int main(int argc, char *argv[]) {
	int n;
	
	cin>>n;
	cout<<inverso(n)<<" ";
	return 0;
}

