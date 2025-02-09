#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	
	cin>>a>>b;
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	return 0;
}

