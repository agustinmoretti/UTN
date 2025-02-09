#include <iostream>
using namespace std;

void masmas(int& a){
	a=a+1;
}
void menosmenos(int& b){
	b=b-1;
}
int main(int argc, char *argv[]) {
	int a, b;
	
	cin>>a>>b;
	masmas(a);
	menosmenos(b);
	cout<<"a= "<<a<<"b= "<<b<<endl;
	
	return 0;
}

