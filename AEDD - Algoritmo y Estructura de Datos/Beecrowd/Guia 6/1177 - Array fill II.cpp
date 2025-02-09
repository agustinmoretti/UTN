#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int t, N[1000];
	
	cin>>t;
	
	for(int i=0; i<1000; i++){
		N[i]=i%t;
	}
	for(int i=0; i<1000; i++){
		cout<<"N["<<i<<"] = "<<N[i]<<endl;
	}
	return 0;
}

