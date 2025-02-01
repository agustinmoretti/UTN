#include <iostream>
using namespace std;

struct dia{
	int numero;
	string nombre;
};
struct semana{
	dia dias[7];
};
struct mes{
	int numeroMes;
	string nombre;
	semana semanas[5];
};
struct calendario{
	int anio;
	mes meses[12];
};
void cargarOctubre(calendario& year2021){
	int diasMax=0;
	
	year2021.meses[7].nombre="Octubre";
	year2021.meses[7].numeroMes=10;
	
	for(int i=0;i<5 and diasMax<=31;i++){
		for(int j=0;j<7 and diasMax<=31;j++){
			cout<<"Ingrese el nombre del dia (ej: Lunes, Martes...): ";
			cin>>year2021.meses[7].semanas[i].dias[j].nombre;
			cout << "Ingrese el numero del dia (hasta 31 como maximo): ";
			cin>>year2021.meses[7].semanas[i].dias[j].numero;
			diasMax++;
		}
	}
	
	cout<<year2021.meses[7].numeroMes<<" "<<year2021.meses[7].nombre<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<7;j++){
			if(year2021.meses[7].semanas[i].dias[j].numero > 0 && year2021.meses[7].semanas[i].dias[j].numero <=31){
				cout<<year2021.meses[7].semanas[i].dias[j].nombre<<" "<<year2021.meses[7].semanas[i].dias[j].numero<<endl;
			}
		}
	}
}
int main(int argc, char *argv[]) {
	calendario year2021;
	
	cargarOctubre(year2021);
	
	return 0;
}

