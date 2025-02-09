#include <iostream>
using namespace std;

bool esDiagonal(int m[][3], int tl){
	int i=1, j;
	bool b=true;
	
	while((i<tl) and b){
		j=0;
		while((j<=i-1) and b){
			if(m[i][j]!=0 or m[j][i]!=0) b=false;
			j++;
		}
		i++;
	}
	if(b){
		i=0;
		while((i<tl) and b){
			if(m[i][i]==0) b=false;
			i++;
		}
	}
	return b;
}
int main(int argc, char *argv[]) {
	int m[3][3], tl=3;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m[i][j];
		}
	}

	if(esDiagonal(m,tl))cout<<"Es diagonal"<<endl;
	else cout<<"No es diagonal"<<endl;
	
	return 0;
}

