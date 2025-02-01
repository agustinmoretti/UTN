#include <iostream>
using namespace std;

void intercambio(int& a, int& b){
	int aux=a;
	a=b;
	b=aux;
}
void uno(int a[],int b[], int v[], int ta, int tb, int& tv, bool c){
	int pasada=1, k, intercambios=1;
	while(pasada<ta and intercambios){
		intercambios=0;
		for(k=0;k<ta-pasada;k++){
			if(a[k]>a[k+1]){
				intercambio(a[k],a[k+1]);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	pasada=1;
	intercambios=1;
	while(pasada<tb and intercambios){
		intercambios=0;
		for(k=0;k<tb-pasada;k++){
			if(b[k]>b[k+1]){
				intercambio(b[k],b[k+1]);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	
	for(int i=0;i<tb;i++){
		for(int j=0;j<ta;j++){
			if(b[i]==a[j]){
				v[i]=b[i];
				tv++;
				break;
			}
		}
	}
	if(!c){
		pasada=1;
		intercambios=1;
		while(pasada<tv and intercambios){
			intercambios=0;
			for(k=0;k<tv-pasada;k++){
				if(v[k]<v[k+1]){
					intercambio(v[k],v[k+1]);
					intercambios=1;
				}
			}
			pasada=pasada+1;
		}
	}
	
}
int main(int argc, char *argv[]) {
	int a[500], b[500],ta=0,tb=0,v[500],tv=0;
	bool c;
	
	cout<<"Ingrese el tl de a: ";
	cin>>ta;
	cout<<endl;
	
	cout<<"Ingrese el tl de b: ";
	cin>>tb;
	cout<<endl;
	if(tb>ta){
		cout<<"Ingrese nuevamente el tl de b(debe ser <=ta): ";
		cin>>tb;
		cout<<endl;
	}
	
	cout<<"Ingrese los valores del vector a: ";
	for(int i=0;i<ta;i++){
		cin>>a[i];
	}
	cout<<"Ingrese los valores del vector b: ";
	for(int i=0;i<tb;i++){
		cin>>b[i];
	}
	
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	cout<<endl;
	
	uno(a,b,v,ta,tb,tv,c);
	
	cout<<"Tl del vector v:"<<tv<<endl;
	for(int i=0;i<tv;i++){
		cout<<"v["<<i<<"]= "<<v[i]<<endl;
	}
	return 0;
}

