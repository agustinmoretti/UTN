#include <iostream>
using namespace std;

void cantidadRepetidos(int v[], int tl){
	int contNumRepetidos=0; 
	for(int i=0; i<tl; i++){
		int valor=v[i];
		int central, bajo=i, alto=tl-1, pos1=-1, pos2=-1;
		while(bajo<=alto and pos1==-1){
			central = (bajo+alto)/2;
			if(v[central]==valor) pos1 = central;
			else{
				if(v[central]>valor) alto = central-1;
				else bajo = central+1;
			}
		}
		bajo=i;
		alto=tl-1;
		while(bajo<=alto and pos2==-1){
			central=(bajo+alto)/2;
			if(v[central]==valor) pos2 = central;
			else{
				if(v[central]>valor) alto = central-1;
				else bajo = central+1;
			}
		}
		int repeticiones = pos2-pos1+1;
		if(repeticiones>10){
			contNumRepetidos++;
		}
		i = pos2+1;
	}
	cout<<"Se repitieron mas de 10 veces "<<contNumRepetidos<<" numeros en el arreglo"<<endl;
}
int main(int argc, char *argv[]) {
	int v[1500], tl=15;
	
	for(int i=0; i<tl; i++){
		cin>>v[i];
	}
	
	cantidadRepetidos(v, tl);
	
	return 0;
}

