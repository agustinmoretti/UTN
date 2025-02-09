#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, x, y;
	
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int suma=0;
		cin>>x>>y;
		
		if(x>y){
			int aux=x;
			x=y;
			y=aux;
		}
		for(int k=x+1; k<y; k++){
			if(k%2!=0){
				suma+=k;
			}
		}
		cout<<suma<<endl;
	}

	return 0;
}
