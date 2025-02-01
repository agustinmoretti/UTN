#include <iostream>
#include <iomanip>
using namespace std;

void funcion(int a,int b,int c,int d,int e){
	int cont1=0,cont2=0,cont3=0;
	double r=0;
	
	if(a==1)cont1++;
	else if(a==2)cont2++;
	else if(a==3)cont3++;
	
	if(b==1)cont1++;
	else if(b==2)cont2++;
	else if(b==3)cont3++;
	
	if(c==1)cont1++;
	else if(c==2)cont2++;
	else if(c==3)cont3++;
	
	if(d==1)cont1++;
	else if(d==2)cont2++;
	else if(d==3)cont3++;
	
	if(e==1)cont1++;
	else if(e==2)cont2++;
	else if(e==3)cont3++;
	
	if(cont1>=3)cout<<"Hay un valor que aparece mas veces que los otros dos: 1"<<endl;
	else if(cont2>=3)cout<<"Hay un valor que aparece mas veces que los otros dos: 2"<<endl;
	else if(cont3>=3) cout<<"Hay un valor que aparece mas veces que los otros dos: 3"<<endl;
	
	if(cont1==5)cout<<"Hay dos valores que no aparecen: 2 y 3"<<endl;
	else if(cont2==5)cout<<"Hay dos valores que no aparecen: 1 y 3"<<endl;
	else if(cont3==5) cout<<"Hay dos valores que no aparecen: 1 y 2"<<endl;
	
	if(cont1==2 and cont2==2)cout<<"Hay dos valores que aparecen 2 veces: 1 y 2"<<endl;
	else if(cont2==2 and cont3==2)cout<<"Hay dos valores que aparecen 2 veces: 2 y 3"<<endl;
	else if(cont1==2 and cont3==2) cout<<"Hay dos valores que aparecen 2 veces: 1 y 3"<<endl;
	
	r=(a+b+c+d+3)/5;
	cout<<"El promedio de los 5 valores es:"<<setprecision(2)<<fixed<<r<<endl;
}
int main(int argc, char *argv[]) {
	int a,b,c,d,e;
	
	cin>>a>>b>>c>>d>>e;
	funcion(a,b,c,d,e);
	return 0;
}
