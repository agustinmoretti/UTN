#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y,suma=0;
	
	cin>>x>>y;
	
	if(x>y){
		int aux=x;
		x=y;
		y=aux;
	}
	
	for(int i=x+1; i<y; i++){
		if(i%2!=0){
			suma+=i;
		}
	}
	cout<<suma<<endl;
	return 0;
}

