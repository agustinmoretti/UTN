#include <iostream>
using namespace std;

float menorMayor(float& a, float& b, float& c, float& menor, float& mayor){
	if(a==b and b==c) return -1;
	if(a==b or b==c or a==c){
		if(a>b and a>c){
			mayor=a;
		}else if(b>a and b>c){
			mayor=b;
		}else{
			mayor=c;
		}
		if(a<b and a<c){
			menor=a;
		}else if(b<a and b<c){
			menor=b;
		}else{
			menor=c;
		}
		return 1;
	}
		if(a>b and a>c){
			mayor=a;
		}else if(b>a and b>c){
			mayor=b;
		}else{
			mayor=c;
		}
		if(a<b and a<c){
			menor=a;
		}else if(b<a and b<c){
			menor=b;
		}else{
			menor=c;
		}
		return 0;
}
int main(int argc, char *argv[]) {
	float a,b,c,menor,mayor;
	
	cin>>a>>b>>c;
	if(menorMayor(a,b,c,menor,mayor)==-1){
		cout<<"Todos los numeros son iguales."<<endl;
	}else{
		cout<<"Retorno= "<<menorMayor(a,b,c,menor,mayor)<<endl;
		cout<<"Mayor= "<<mayor<<endl;
		cout<<"Menor= "<<menor<<endl;
	}
	return 0;
}

