#include <iostream>
using namespace std;
void intercambioF(int m[][100], int n){
	for(int i=0;i<n;i++){
		int aux=m[0][i];
		m[0][i]=m[n-1][i];
		m[n-1][i]=aux;
	}
}
void intercambioC(int m[][100], int n){
	for(int i=0;i<n;i++){
		int aux=m[i][0];
		m[i][0]=m[i][n-1];
		m[i][n-1]=aux;
	}
}
int main(int argc, char *argv[]) {
	int n, m[100][100], x=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		if((m[i][i]%2!=0) and (m[i+1][i+1]%2!=0) and (m[i+1][i]%2!=0) and(m[i][i+1]%2!=0)){
			x++;
		}
	}
	cout<<endl;
	if(x%2==0){
		intercambioF(m, n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
	}else if(x%2!=0){
		intercambioC(m, n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

