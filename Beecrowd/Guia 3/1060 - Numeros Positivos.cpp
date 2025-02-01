#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n,positivos;
	
	for(int i=1; i<=6; i++){
		cin>>n;
		if(n>0){
			positivos++;
		}
	}
	cout<<positivos<<" valores positivos"<<endl;
	return 0;
}

