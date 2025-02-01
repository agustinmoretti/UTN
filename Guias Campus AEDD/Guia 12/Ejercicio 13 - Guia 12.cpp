#include <iostream>
using namespace std;

bool estanEnMatrizB(int a[][100], int b[][100], int n){
	for(int i=0;i<n;i++){
		int valorDiag=a[i][n-i-1];
		bool coincide=false;
		
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(valorDiag==b[j][k]){
					coincide=true;
					break;
				}
			}
			if(coincide) break;
		}
		
		if(!coincide) return false;
		
	}
	return true;
}
bool estanEnDiagPrincipaldeB(int a[][100], int b[][100], int n){
	bool posVisitadas[100];
	for(int i=0;i<n;i++){
		posVisitadas[i]=false;
	}
	
	for(int i=0;i<n;i++){
		int valorDiag=a[i][n-i-1];
		bool coincide=false;
		
		for(int j=0;j<n;j++){
			if(valorDiag==b[j][j] and !posVisitadas[j]){
				coincide=true;
				posVisitadas[j]=true;
				break;
			}
		}
		
		if(!coincide) return false;
		
	}
	return true;
}
bool mismaDiagSecundaria(int a[][100], int b[][100], int n){
	for(int i=0;i<n;i++){
		if(a[i][n-i-1]!=b[i][n-i-1]) return false;
	}
	return true;
}
int main(int argc, char *argv[]) {
	int n=0;
	int a[100][100];/*={
		{1,  2,  3,  4,  5},
		{6,  7,  8,  9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};*/
	int b[100][100];/*={
		{25, 1,  2,  3,  21},
		{6,  24, 7,  9,  22},
		{11, 12, 23, 14, 15},
		{16, 17, 18, 19, 20},
		{5,  10, 15, 20, 25}
	};*/
	
	cout<<"Ingrese el tamaño de la matriz: "<<endl;
	cin>>n;
	
	cout<<"Ingrese los valores de la matriz a: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Ingrese los valores de la matriz b: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}

	if(estanEnMatrizB(a,b,n)){
		cout<<"Todos los elementos de la diagonal secundaria de A están en alguna celda de B."<<endl;
	}else{
		cout<<"No todos los elementos de la diagonal secundaria de A están en B."<<endl;
	}
	
	if(estanEnDiagPrincipaldeB(a,b,n)){
		cout<<"Todos los elementos de la diagonal secundaria de A están en la diagonal principal de B (en cualquier orden)."<<endl;
	}else{
		cout<<"No todos los elementos de la diagonal secundaria de A están en la diagonal principal de B."<<endl;
	}
	
	if(mismaDiagSecundaria(a,b,n)){
		cout<<"Los elementos de la diagonal secundaria de A están en la diagonal secundaria de B en el mismo orden."<<endl;
	}else{
		cout<<"Los elementos de la diagonal secundaria de A no están en la diagonal secundaria de B en el mismo orden."<<endl;
	}
	
	return 0;
}

