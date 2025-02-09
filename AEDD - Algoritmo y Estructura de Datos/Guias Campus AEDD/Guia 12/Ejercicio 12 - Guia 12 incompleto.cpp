#include <iostream>
using namespace std;

void espiral(int m[][100], int n, int x, int y){
	int paso=1, dir=0, valor=1;
	int mov[4][2]={{0,1}, {1,0}, {0,-1}, {-1,0}};
	
	m[x][y]=valor++;
	
	while(valor<=(n*n)){
		for (int i=0;i<paso;i++){
			x+=mov[dir][0];
			y+=mov[dir][1];
			if(x>=0 and x<n and y>=0 and y<n) {
				m[x][y]=valor++;
			}
		}
		
		dir=(dir+1)%4;
		
		if(dir==0 or dir==2){
			paso++;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(int argc, char *argv[]) {
	int m[100][100], n, x=0, y=0;
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			m[i][j]=0;
		}
	}
	
	cout<<"Ingrese el tamaño de la matriz nxn: "<<endl;
	cin>>n;

	if(n%2==0){
		x=(n/2)-1;
		y=(n/2)-1;
		
		espiral(m, n, x, y);
		
	}else{
		x=n/2;
		y=n/2;
		
		espiral(m, n, x, y);
	}
	
	return 0;
}

