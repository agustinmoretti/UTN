#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, N[20];
	
	for(int i=0; i<20; i++){
		cin>>x;
		N[i]=x;
	}
	for(int i=0; i<20/2; i++){
		int temp=N[i];
		N[i]=N[20-1-i];
		N[20-1-i]=temp;
	}
	for(int i=0; i<20; i++){
		cout<<"N["<<i<<"] = "<<N[i]<<endl;
	}
	return 0;
}

