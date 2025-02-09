#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m[6][6], valor=1, n=6;
	int filaInicio=0, filaFin=n-1;
	int colInicio=0, colFin=n-1;
	
	while (filaInicio<=filaFin and colInicio<=colFin) {
		for (int i=colInicio;i<=colFin;i++) {
			m[filaInicio][i]=valor++;
		}
		filaInicio++;
		
		for (int i=filaInicio;i<=filaFin;i++){
			m[i][colFin]=valor++;
		}
		colFin--;
		
		if (filaInicio <= filaFin){
			for (int i=colFin;i>=colInicio;i--) {
				m[filaFin][i]=valor++;
			}
			filaFin--;
		}
		
		if (colInicio<=colFin){
			for (int i=filaFin;i>=filaInicio;i--) {
				m[i][colInicio]=valor++;
			}
			colInicio++;
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(i==0){
				cout<<m[i][j]<<"  ";
			}else{
				cout<<m[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

