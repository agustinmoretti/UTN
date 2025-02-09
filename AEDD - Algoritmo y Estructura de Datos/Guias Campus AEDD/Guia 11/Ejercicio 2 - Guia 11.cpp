#include <iostream>
using namespace std;
void intercambio(int& a, int& b){
	int aux=a;
	a=b;
	b=aux;
}
void elimOrdenar(int v[], int tl, int x, int& cantElim){
	int pasada=1, k, intercambios=1;
	while(pasada<tl and intercambios){
		intercambios=0;
		for(k=0;k<tl-pasada;k++){
			if(v[k]>v[k+1]){
				intercambio(v[k],v[k+1]);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	for(int i=0;i<tl;i++){
		if(v[i]%x==0){
			cantElim++;
			for(int j=i;j<tl;j++){
				v[j]=v[j+1];
			}
			tl--;
			i--;
		}
	}
}
int main(int argc, char *argv[]) {
	int v[500], tl=0, x=0, cantElim=0;
	cout<<"Ingrese el tl: ";
	cin>>tl;
	cout<<endl;
	
	cout<<"Ingrese los valores del vector: ";
	for(int i=0;i<tl;i++){
		cin>>v[i];
	}
	
	cout<<"Ingrese un numero x: ";
	cin>>x;
	cout<<endl;

	elimOrdenar(v, tl, x, cantElim);
	
	cout<<"Cantidad de numeros eliminados: "<<cantElim<<endl;
	for(int i=0;i<tl;i++){
		cout<<"v["<<i<<"]= "<<v[i]<<endl;
	}
	return 0;
}

