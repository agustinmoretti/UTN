#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a>b and b>c){
		cout<<c<<endl<<b<<endl<<a<<endl;
	}else if(a<b and b<c){
		cout<<a<<endl<<b<<endl<<c<<endl;
	}else if(a>b and a<c){
		cout<<b<<endl<<a<<endl<<c<<endl;
	}else if(a<b and a>c){
		cout<<c<<endl<<a<<endl<<b<<endl;
	}else if(a>c and c>b){
		cout<<b<<endl<<c<<endl<<a<<endl;
	}else if(a<c and c<b){
		cout<<a<<endl<<c<<endl<<b<<endl;
	}
	
	cout<<endl;
	cout<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}

