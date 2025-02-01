#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int h,z,l;//h=huguinho, z=zezinho, l=luisinho
	
	cin>>h>>z>>l;
	
	if((z>h and h>l) or (l>h and h>z)){
		cout<<"huguinho"<<endl;
	}else if((h>z and z>l) or (l>z and z>h)){
		cout<<"zezinho"<<endl;
	}else if((z>l and l>h) or (h>l and l>z)){
		cout<<"luisinho"<<endl;
	}
	
	return 0;
}

