#include <iostream>
using namespace std;

void iccanobif(int n, int a=1, int b=1){
	if(n==1){
		cout<<a;
	}else if(n==2){
		cout<<b<<" "<<a<<" ";
	}else{
		iccanobif(n-1,b,a+b);
		cout<<a<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	
	iccanobif(n);
	return 0;
}
