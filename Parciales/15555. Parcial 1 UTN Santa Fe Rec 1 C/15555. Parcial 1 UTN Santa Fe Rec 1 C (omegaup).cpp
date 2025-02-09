#include <iostream>
using namespace std;

// codifique completamente la funcionA aquí

int funcionC(int a, int b, int c, int d){
	int pos1, pos2, aux=0, suma=0, cont=0;
	
	if(a>0){
		pos1=a;
	}else if(b>0){
		if(pos1==0){
			pos1=b;
		}else{
			pos2=b;
		}
	}else if(c>0){
		if(pos1==0){
			pos1=c;
		}else{
			pos2=c;
		}
	}else if(d>0){
		if(pos1==0){
			pos1=d;
		}else{
			pos2=d;
		}
	}
	if(pos1>pos2){
		aux=pos2;
		pos2=pos1;
		pos1=aux;
	}
	while(suma<=pos2){
		cont++;
		suma=pos1;
		suma+=cont;
	}
	return cont;
}

int main(int argc, char *argv[]) {
	// declare las variables necesarias aquí...
	int a,b,c,d;
		// codifique ingreso de datos y validacion segun consigna aquí...
		while(true){
			cin>>a>>b>>c>>d;
			
			int pos_count = 0, neg_count = 0;
			
			if (a > 0) pos_count++;
			if (a < 0) neg_count++;
			if (b > 0) pos_count++;
			if (b < 0) neg_count++;
			if (c > 0) pos_count++;
			if (c < 0) neg_count++;
			if (d > 0) pos_count++;
			if (d < 0) neg_count++;
			
			if (pos_count == 2 && neg_count == 2) {
				break;
			}
		}	
		// llamada a funcion aquí...
		cout << funcionC(a,b,c,d) << endl;
	
	return 0;
}

