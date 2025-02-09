#include <iostream>
using namespace std;

void aniosBisiestos(int a, int n){
	while(n>0){
		if(a%4==0 and (a%100!=0 or a%400==0)){
			cout<<a<<endl;
			n--;
		}
		a++;
	}
}

int main(int argc, char *argv[]) {
	int a,n;
	
	cin>>a>>n;
	aniosBisiestos(a,n);	
	return 0;
}

