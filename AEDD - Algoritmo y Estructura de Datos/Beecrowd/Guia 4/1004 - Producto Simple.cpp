#include <iostream>
using namespace std;

void producto(int a, int b){
	int prod=0;

	prod=a*b;
	cout<<"PROD = "<<prod<<endl;
}

int main(int argc, char *argv[]) {
	int a,b;
	
	cin>>a>>b;
	producto(a,b);
	
	return 0;
}

