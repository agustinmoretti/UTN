#include <iostream>
using namespace std;

int eliminarImparEntrePares(int v[], int& tl, int& mayorDif){
	int imparesElim=0, diferencia=0, ultimoPar=0;
	
	if(v[0]%2!=0){
		for(int i=1; i<tl; i++){
			if(v[i]%2==1 and (v[i-1]%2==0 and v[i+1]%2==0)){
				for(int j=i; j<tl; j++){
					v[j]=v[j+1];
				}
				tl--;
				imparesElim++;
				i--;
			}
		}
	}else{
		for(int i=0; i<tl; i++){
			if(v[i]%2==1 and (v[i-1]%2==0 and v[i+1]%2==0)){
				for(int j=i; j<tl; j++){
					v[j]=v[j+1];
				}
				tl--;
				imparesElim++;
				i--;
			}
		}
	}
	for(int i=0; i<tl; i++){
		if(v[i]%2==0){
			if(ultimoPar!=0){
				diferencia=v[i]-ultimoPar;
				if(diferencia>mayorDif){
					mayorDif=diferencia;
				}
			}
			ultimoPar=v[i];
		}	
	}
	return imparesElim;
}
int main(int argc, char *argv[]) {
	int tl=10;
	int v[100],  mayorDif=0, aux=0;
	
	cout<<"Ingrese los valores del vector: "<<endl;
	for(int i=0; i<tl; i++){
		cin>>v[i];
	}
	aux=eliminarImparEntrePares(v, tl, mayorDif);
	for(int i=0; i<tl; i++){
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
	}
	cout<<"Cantidad de elementos impares eliminados: "<<aux<<endl;
	cout<<"Mayor diferencia entre dos pares sucesivos: "<<mayorDif<<endl;
	
	return 0;
}

