#include <iostream>
using namespace std;

void completarDatosFaltantes(int m[][12]){
	int prom=0, suma=0, meses=0;

	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			if(m[i][j]==-1){
				suma=0;
				meses=0;
				for(int k=0;k<12;k++){
					if(m[i][k]!=-1){
						suma+=m[i][k];
						meses++;
					}
				}
				if(meses>0){
					prom=suma/meses;
					m[i][j]=prom;
				}
			}
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
void mmTotales(int m[][12]){
	int mMod[5][13], suma=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			mMod[i][j]=m[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			suma+=mMod[i][j];
		}
		m[i][12]=suma;
	}
	
	for(int i=0;i<5;i++){
		cout<<"Departamento "<<i+1<<" : "<<m[i][12]<<" mm";
		cout<<endl;
	}
}

int main(int argc, char *argv[]) {
	int m[5][12] = {
		{12, 13, 22, 113, 137, 122, 33, 13, 31, 10, 11, -1},
		{1, -1, 222, 113, 137, -1, 33, 13, 31, 10, 11, 71},
		{-1, 13, 23, 113, 137, 122, 33, 13, 31, 10, 11, -1},
		{-1, 13, 2, 113, 137, -1, 33, 13, 31, -1, 11, 90},
		{12, -1, 20, 113, 137, 122, 33, 13, 31, -1, -1, 73}
	};
	
	cout<<"Matriz original de datos: "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matriz modificada de datos: "<<endl;
	completarDatosFaltantes(m);
	cout<<endl;
	
	cout<<"Totales anuales de precipitaciones(por departamento): "<<endl;
	mmTotales(m);
	
	return 0;
}

