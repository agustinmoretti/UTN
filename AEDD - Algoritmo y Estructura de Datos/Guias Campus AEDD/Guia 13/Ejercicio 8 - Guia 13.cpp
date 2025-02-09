#include <iostream>
#include <string>
using namespace std;

bool esdigito(char c){
	if(c >= '0' && c <= '9') return true;
	else return false;
}
int main(int argc, char *argv[]) {
	string fraseRuidos="", fraseLimpia="";
	
	getline(cin, fraseRuidos);
	
	for(int i=0;i<fraseRuidos.length();i++){
		if(!esdigito(fraseRuidos[i])){
			fraseLimpia+=fraseRuidos[i];
		}
	}
	
	cout<<fraseLimpia<<endl;
	
	return 0;
}

