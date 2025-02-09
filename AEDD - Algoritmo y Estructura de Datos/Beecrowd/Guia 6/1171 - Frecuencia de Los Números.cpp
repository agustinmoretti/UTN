#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, n;
	int contApariciones[2001]={0};
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>x;
		contApariciones[x]++;
	}
	
	for(int i=1; i<=2000; i++){
		if(contApariciones[i] > 0){
			cout<<i<<" aparece "<<contApariciones[i]<<" vez(es)"<<endl;
		}
	}
	
	return 0;
}

