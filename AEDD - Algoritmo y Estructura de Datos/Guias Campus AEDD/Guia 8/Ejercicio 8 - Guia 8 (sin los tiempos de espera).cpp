#include <iostream>
using namespace std;

void cuentaRegresiva(int n){
	if(n==0){
		cout<<"DESPEGUE";
		return ;
	}else if(n<=10){
		cout<<n<<" ";
		cuentaRegresiva(n-1);
	}else if(n%10==0 and n>10){
		cout<<n<<" ";
		cuentaRegresiva(n-10);
	}else if(n%10!=0 and n>10){
		cuentaRegresiva(n-1);
	}
}
int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	
	cuentaRegresiva(n);
	return 0;
}

