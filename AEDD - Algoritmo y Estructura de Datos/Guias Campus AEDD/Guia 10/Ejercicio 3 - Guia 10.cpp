#include <iostream>
#include <iomanip>
using namespace std;

int eliminarRepetidos(int v[], int tf, int& tl, double& prom, int& suma){
	int paresEliminados=0;// suma=0;
	
	for(int i=0; i<tf; i++){
		bool repetido=false;
		for(int k=i+1; k<tf; k++){
			if(v[i]==v[k]){
				repetido=true;
				
				if(v[k]%2==0){
					paresEliminados++;
				}
				for(int j=k; j<tf; j++){
					v[j]=v[j+1];
				}
				tf--;
				k--; 
			}
		}
		if(!repetido){//revisar la suma, 
			tl++;
		}
	}
	for(int i=0; i<tl; i++){
		suma+=v[i];
	}
	prom=(suma/tl);
	
	return paresEliminados;
}

int main(int argc, char *argv[]) {
	const int tf=6;
	int v[tf], tl=1, suma =0;
	double prom;
	
	cout<<"Ingrese los valores del arreglo: "<<endl;
	for(int i=0; i<tf; i++){
		cin>>v[i];
	}
	cout<<"Cantidad de digitos pares eliminados: "<<eliminarRepetidos(v, tf, tl, prom, suma)<<endl;
	cout<<"Promedio de los digitos del vector: "<<fixed<<setprecision(2)<<prom<<endl;
	for(int i=0; i<tl; i++){
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
	}
	cout<<suma<<endl;
	return 0;
}

