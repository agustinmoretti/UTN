#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m,n;
	
	cin>>m>>n;
	
	while(m>0 and n>0){
		int suma=0;
		
		if(m>n){
			int aux=m;
			m=n;
			n=aux;
		}
		
		for(int i=m; i<=n; i++){
			suma=suma+i;
			cout<<i<<" ";
		}
		cout<<"Sum="<<suma<<endl;
		cin>>m>>n;
	}
	return 0;
}

