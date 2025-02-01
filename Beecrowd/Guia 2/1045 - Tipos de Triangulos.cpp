#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	double a,b,c;
	
	cin>>a>>b>>c;
	
	if((a>=(b+c)) or (b>=(a+c)) or (c>=(b+a))){
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}else if((pow(a,2)==(pow(b,2)+pow(c,2))) or (pow(b,2)==(pow(a,2)+pow(c,2))) or (pow(c,2)==(pow(b,2)+pow(a,2)))){
		cout<<"TRIANGULO RETANGULO"<<endl;
	}else if((pow(a,2)>(pow(b,2)+pow(c,2))) or (pow(b,2)>(pow(a,2)+pow(c,2))) or (pow(c,2)>(pow(b,2)+pow(a,2)))){
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	}else if((pow(a,2)<(pow(b,2)+pow(c,2))) or (pow(b,2)<(pow(a,2)+pow(c,2))) or (pow(c,2)<(pow(b,2)+pow(a,2)))){
		cout<<"TRIANGULO ACUTANGULO"<<endl;
	}
	if(a==b and b==c){
		cout<<"TRIANGULO EQUILATERO"<<endl;
	}
	if((a==b and b!=c) or (b==c and a!=c) or (a==c and b!=a)){
		cout<<"TRIANGULO ISOSCELES"<<endl;	
	}
	
	return 0;
}

