#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int resultados[6][6], puntosTotales[6], suma=0, campeon=0,desafioDeVictoria=-1,max=0;
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>resultados[i][j];
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(i!=j){
				suma+=resultados[i][j];
			}
		}
		puntosTotales[i]=suma;
		suma=0;
	}
	max=puntosTotales[0];
	for(int i=1;i<6;i++){
		if(puntosTotales[i]>max){
			max=puntosTotales[i];
			campeon=i;
		}
	}
	for (int i=0;i<6;i++){
		bool sinVictoria=true;
		for (int j=0;j<6;j++){
			if (resultados[i][j]!=0){
				sinVictoria=false;
				break;
			}
		}
		if (sinVictoria){
			desafioDeVictoria=i;
		}
	}
	for(int i=0;i<6;i++){
		cout<<"Puntos totales de facultad "<<i<<" = "<<puntosTotales[i]<<endl;
	}
	cout<<"El campeon del torneo es la facultad "<<campeon<<endl;
	if(desafioDeVictoria!=-1) cout<<"La facultad que no gano ningun enfrentamiento es la numero "<<desafioDeVictoria<<endl;
	else cout<<"Todas las facultades ganaron al menos un enfrentamiento."<<endl;
	return 0;
}

