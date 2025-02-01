#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,h,m,s;
	
	cin>>n;
	
	h=n/3600;
	n%=3600;
	m=n/60;
	n%=60;
	s=n%60;
	n%=60;
	
	cout<<h<<":"<<m<<":"<<s<<endl;
	return 0;
}

