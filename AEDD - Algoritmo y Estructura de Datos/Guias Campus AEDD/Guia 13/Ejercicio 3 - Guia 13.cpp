#include <iostream>
#include <string>
using namespace std;

bool esPalindroma(string frase){
	string fraseLimpia;
	
	for(int i=0;i<frase.length();i++){
		if(frase[i]!=' '){
			if(frase[i]>='A' and frase[i]<='Z'){
				fraseLimpia+=frase[i]+32;
			}else{
				fraseLimpia+=frase[i];
			}
		}
	}
	int inicio=0;
	int fin=fraseLimpia.size()-1;
	while(inicio<fin){
		if(fraseLimpia[inicio]!=fraseLimpia[fin]){
			return false;
		}
		inicio++;
		fin--;
	}
	return true;
}
int main(int argc, char *argv[]) {
	string frase;

	cout<<"Ingrese una frase: ";
	getline(cin, frase);
	
	if(esPalindroma(frase)){
		cout<<"Es palindroma"<<endl;
	}else{
		cout<<"No es palindroma"<<endl;
	}
	return 0;
}

