#include <iostream>
using namespace std;

bool esTriangSup(int m[][3], int tl){
	int i=0;
	bool b=true;
	while((i<tl)&& b){
		int j=0;
		while((j<i-1)&& b){
			if(m[i][j]) b=false;
			j++;
		}
		i++;
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

	if(esTriangSup(m,tl))cout<<"Es triangular superior"<<endl;
	else cout<<"No es triangular superior"<<endl;
	
	return 0;
}

