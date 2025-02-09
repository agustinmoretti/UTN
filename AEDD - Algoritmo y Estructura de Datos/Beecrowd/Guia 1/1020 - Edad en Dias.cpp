#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,m,d; 
	
	cin>>d;
	
	a=d/365;
	d%=365;
	m=d/30;
	d%=30;
	
	cout<<a<<" ano(s)"<<endl;
	cout<<m<<" mes(es)"<<endl;
	cout<<d<<" dia(s)"<<endl;
	
	return 0;
}

