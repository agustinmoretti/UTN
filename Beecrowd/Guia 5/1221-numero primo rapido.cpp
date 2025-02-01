#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int n){
	if(n<=1){
		return false;
	}
	if(n==2){
		return true;
	}
	if(n%2==0){
		return false;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
	int main(int argc, char *argv[]) {
		int n;
		
		cin>>n;
		
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(esPrimo(x)){
				cout<<"Prime"<<endl;
			}else{
				cout<<"Not Prime"<<endl;
			}
		}
		return 0;
	}
