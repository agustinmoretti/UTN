#include <iostream>
using namespace std;

void chrtoupper(char& c){
	if(c>='a' and c<='z'){
		c=c-32;
	}
}
int main(int argc, char *argv[]) {
	char c;
	
	cin>>c;
	chrtoupper(c);
	cout<<c<<endl;
	
	return 0;
}

