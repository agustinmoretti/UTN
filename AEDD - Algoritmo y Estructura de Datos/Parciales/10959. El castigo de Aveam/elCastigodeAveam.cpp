#include <iostream>
using namespace std;

void contador(int a[100][100], int x[2501], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			x[a[i][j]]++;
		}
	}
}
int main(int argc, char *argv[]) {
	int a[100][100], n, m, x[2501];
	
	for(int i=0;i<2501;i++){
		x[i]=0;
	}
	
	cin>>m>>n;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	contador(a, x, m, n);
	
	for(int i=0;i<2501;i++){
		if(x[i]!=0){
			cout<<x[i]<<" ";
		}
	}
	
	return 0;
}

