#include <iostream>
#include <iomanip>
using namespace std;

void funcion(int a,char b,char c){
	int contInterc=0,contPosMult3=0,menor=0,mayor=0,aux=0;
	double prom=0;
	
	if(a>0 and a%3==0){
		contPosMult3++;
	}
	if(b>0 and b%3==0){
		contPosMult3++;
	}
	if(c>0 and c%3==0){
		contPosMult3++;
	}
	
	if(a<b and b<c){
		cout<<"Los tres valores se encuentran ordenados de menor a mayor"<<endl;
	}
	if(contPosMult3==3){
		cout<<"Los tres valores son positivos y multiplos de tres"<<endl;
	}
	if(a<b and b<c){
		menor=a;
		mayor=c;
	}else if(a<c and c<b){
		menor=a;
		mayor=b;
	}else if(b<c and c<a){
		menor=b;
		mayor=a;
	}else if(c<b and b<a){
		menor=c;
		mayor=a;
	}else if(a<c and c<b){
		menor=a;
		mayor=b;
	}else if(b<a and a<c){
		menor=b;
		mayor=c;
	}else if(c<a and a<b){
		menor=c;
		mayor=b;
	}
	prom=(menor+mayor)/2.0;
	cout<<"El promedio entre el menor y el mayor de los tres valores es: "<<fixed<<setprecision(3)<<prom<<endl;
	
	while(not(a<b and b<c)){
		if(a>b){
			aux=a;
			a=b;
			b=a;
			contInterc++;
		}
		if(b>c){
			aux=b;
			b=c;
			c=b;
			contInterc++;
		}
		if(c>b){
			aux=c;
			c=b;
			b=aux;
			contInterc++;
		}
	}
	cout<<"Cantidad minima de intercambios= "<<contInterc<<endl;
}
int main(int argc, char *argv[]) {
	int a,b,c;
	
	cin>>a>>b>>c;
	funcion(a,b,c);
	return 0;
}
