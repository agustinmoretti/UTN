#include <iostream>
using namespace std;

int sumaDigMul(int num, int n){
	int multiplo=0;
	int ultimoDig=num%10;
	
	if(num==0)return 0;
	if(ultimoDig%n==0){
		multiplo=ultimoDig;
	}
	return multiplo + sumaDigMul(num/10, n);
}
int main(int argc, char *argv[]) {
	int num, n;
	
	cin>>num;
	cin>>n;
	cout<<sumaDigMul(num, n)<<endl;
	return 0;
}

