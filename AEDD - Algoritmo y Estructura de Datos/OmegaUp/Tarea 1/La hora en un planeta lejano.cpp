#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int s,m,h,d;
	
	cin>>s;
	
	d=s/42000;
	s%=42000;
	h=s/3500;
	s%=3500;
	m=s/50;
	s%=50;
	
	cout<<d<<" "<<h<<" "<<m<<" "<<s<<endl;
	return 0;
}

