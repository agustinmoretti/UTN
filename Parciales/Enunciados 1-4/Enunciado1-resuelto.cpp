#include <iostream>
#include <iomanip>
#define M_PI 3.14
using namespace std;

void funcion(int a,int b,int c,int d){
	int abcd=0;
	double k=0;
	
	if((a%9==0)and(b==7)and(c%5==0)and(d==3)){
		return;
	}else if((a==(b-1) and b==(c-1))or(b==(c-1) and c==(d-1))){
		cout<<"Hay una escalera de al menos tres numeros crecientes consecutivos"<<endl;
	}
	if(a!=b and b!=c and c!=d and a!=c and b!=d and a!=d){
		cout<<"Todos los datos son diferentes"<<endl;
	}
	
	abcd=(a*1000)+(b*100)+(c*10)+d;
	k=abcd*M_PI;
	cout<<"El numero magico es: "<<setprecision(2)<<fixed<<k<<endl;
}
int main(int argc, char *argv[]) {
	int a,b,c,d;
	
	cin>>a>>b>>c>>d;
	funcion(a,b,c,d);
	return 0;
}

