#include <iostream>
using namespace std;

int funcionMult100(int v[], int& tl){
	int elemInsertados=0;
	
	for(int i=0; i<tl; i++){
		if(v[i]%100==0){
			for(int k=tl; k>i; k--){
				v[k]=v[k-1];
			}
			
			v[i+1]=v[i]+1;
			
			i++;
			tl++;
			elemInsertados++;
		}
	}
	return elemInsertados;
}

int main(int argc, char *argv[]) {
	int v[30], tl=6, aux=0;
	
	cout<<"Inserte 6 valores en el vector: "<<endl;
	for(int i=0; i<tl; i++){
		cin>>v[i];
	}
	aux=funcionMult100(v, tl);
	
	for(int i=0; i<tl; i++){
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
	}
	
	cout<<"Se insertaron "<<aux<<" nuevos elementos"<<endl;
	return 0;
}

