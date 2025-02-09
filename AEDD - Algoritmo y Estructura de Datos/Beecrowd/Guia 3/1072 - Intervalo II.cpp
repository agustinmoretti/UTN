#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,x,in=0,out=0;
	
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cin>>x;
		if(x>=10 and x<=20){
			in++;
		}else{
			out++;
		}
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	return 0;
}

