#include <iostream>
#include <string>
using namespace std;

string comboString(string a, string b){
	string corto, largo, fraseCompleta;
	
	if(a.length()<b.length()){
		corto=a;
		largo=b;
	}else if(a.length()>=b.length()){
		corto=b;
		largo=a;
	}
	fraseCompleta=corto+largo+corto;
	return fraseCompleta;
}
int main(int argc, char *argv[]) {
	string a, b;
	
	cout<<"Ingrese la frase a: ";
	getline(cin, a);
	cout<<endl;
	
	cout<<"Ingrese la frase b: ";
	getline(cin, b);
	cout<<endl;
	
	string frase=comboString(a, b);
	cout<<frase<<endl;
	
	return 0;
}

