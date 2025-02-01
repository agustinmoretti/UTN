#include <iostream>
using namespace std;

void funcion(char a,char b,char c,char d){
	int contVoc=0,contCons=0;
	
	if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u') contVoc++;
	else contCons++;
	if(b=='a' or b=='e' or b=='i' or b=='o' or b=='u') contVoc++;
	else contCons++;
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') contVoc++;
	else contCons++;
	if(d=='a' or d=='e' or d=='i' or d=='o' or d=='u') contVoc++;
	else contCons++;
	
	if((a=='a') and (b=='e') and (c=='i') and (d=='o')){
		cout<<"CUATRO VOCALES ORDENADAS"<<endl;
		return;
	}
	if(a==(b-1) and b==(c-1) and c==(d-1)){
		cout<<"Las cuatro letras son consecutivas"<<endl;
	}
	if(contVoc>=3){
		cout<<"Hay al menos 3 letras que son vocales"<<endl;
	}
	cout<<"Hay "<<contVoc<<" vocales y "<<contCons<<" consonantes"<<endl;
}
int main(int argc, char *argv[]) {
	char a,b,c,d;
	
	cin>>a>>b>>c>>d;
	funcion(a,b,c,d);
	return 0;
}
