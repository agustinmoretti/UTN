#include <iostream>
using namespace std;

bool esMayuscula(char a){
	if(a>='A' and a<='Z'){
		return true;
	}
	return false;
}

int main(int argc, char *argv[]) {
	char a;
	
	cin>>a;
	cout<<esMayuscula(a)<<endl;
	
	return 0;
}

