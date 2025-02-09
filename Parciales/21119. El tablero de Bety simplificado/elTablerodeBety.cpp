#include <iostream>
using namespace std;

void intercambioUp(int mat[100][100], int n, int m){
	int aux[100];
	for(int j=0;j<m;j++){
		aux[j]=mat[0][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			mat[i][j]=mat[i+1][j];
		}
	}
	for(int j=0;j<m;j++){
		mat[n-1][j]=aux[j];
	}
}
void intercambioDown(int mat[100][100], int n, int m){
	int aux[100];
	for(int j=0;j<m;j++){
		aux[j]=mat[n-1][j];
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<m;j++){
			mat[i][j]=mat[i-1][j];
		}
	}
	for(int j=0;j<m;j++){
		mat[0][j]=aux[j];
	}
}
void intercambioLeft(int mat[100][100], int n, int m){
	int aux[100];
	for(int i=0;i<n;i++){
		aux[i]=mat[i][0];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			mat[i][j]=mat[i][j+1];
		}
	}
	for(int i=0;i<n;i++){
		mat[i][m-1]=aux[i];
	}
}
void intercambioRight(int mat[100][100], int n, int m){
	int aux[100];
	for(int i=0;i<n;i++){
		aux[i]=mat[i][m-1];
	}
	for(int i=0;i<n;i++){
		for(int j=m-1;j>0;j--){
			mat[i][j]=mat[i][j-1];
		}
	}
	for(int i=0;i<n;i++){
		mat[i][0]=aux[i];
	}
}
void direcciones(int mat[100][100], int n, int m, int dir){
	switch(dir){
		case 1:{
			intercambioUp(mat, n, m);
		}
		break;
		case 2:{
			intercambioDown(mat, n, m);
		}
		break;
		case 3:{
			intercambioLeft(mat, n, m);
		}
		break;
		case 4:{
			intercambioRight(mat, n, m);
		}
		break;
	}
}
int main(int argc, char *argv[]) {
	int mat[100][100], n, m, k, dir;
	
	cin>>n>>m>>k;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<k;i++){
		cin>>dir;
		if(dir>=1 and dir<=4){
			direcciones(mat, n, m, dir);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}

