#include <iostream>
#include <string>
using namespace std;

bool sonAnagramas(string a, string b){
	bool coincide=false;
	if(a.length()!=b.length()){
		return false;
	}else{
		for(int i=0;i<a.length();i++){
			coincide=false;
			for(int j=0;j<b.length();j++){
				if(a[i]==b[j]){
					coincide=true;
					break;
				}
			}
			if(!coincide) return false;
		}
	}
	return true;
}
int main(int argc, char *argv[]){
	string a, b;
	
	cout<<"Introduce la primera cadena: ";
	cin>>a;
	cout<<"Introduce la segunda cadena: ";
	cin>>b;
	
	if(sonAnagramas(a, b)){
		cout<<"A y B son anagramas."<<endl;
	}else{
		cout<<"A y B no son anagramas."<<endl;
	}
	
	return 0;
}

