#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,aux=0;
	
	cin>>a>>b>>c;
	
	aux=(a+b+abs(a-b))/2;
	aux=(aux+c+abs(aux-c))/2;
	
	cout<<aux<<" eh o maior"<<endl;
	
	return 0;
}

