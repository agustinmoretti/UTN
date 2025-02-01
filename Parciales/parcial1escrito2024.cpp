#include <iostream>
#include <iomanip>
using namespace std;

bool obtenerDatosAlumno(int& e,int& a,char& c,char& he,int& contM,int& contV,int& contN){
	while(cin>>e){
		cin>>a>>c>>he;
		while(he!='f'){
			if(a==1){
				if(he=='M'){
					contM++;
				}else if(he=='V'){
					contV++;
				}else if(he=='N'){
					contN++;
				}
			}
			cin>>he;
		}
		return true;
	}
	return false;
}
int distinguidos(int cant){
	int matAprob;
	float prom=0, matCurs;
	
	if(cant==0){
		return 0;
	}else{
		cin>>matCurs>>matAprob>>prom;
		
		if(matCurs>=20 and (matAprob/matCurs)>=0.8){
			return 1+distinguidos(cant-1);
		}else{
			return distinguidos(cant-1);
		}
	}
}
void itemB(int cant){
	cin>>cant;
	cout<<"Cantidad de alumnos con 20 materias (o mas) cursadas y el 80% aprobadas = "<<distinguidos(cant)<<endl;
}


int main(int argc, char *argv[]) {
	int e, a, contM=0, contV=0, contN=0, totalDiasEstudio=0,contAlumno1=0, edadAlumMayor=0, contMS=0, contVS=0, contNS=0;
	char c, he;
	float prom=0;
	
	while(obtenerDatosAlumno(e,a,c,he,contM,contV,contN)){
		if(e>edadAlumMayor){
			edadAlumMayor=e;
		}
		if(a==1){
			totalDiasEstudio+=(contM+contV+contN);
			contAlumno1++;
		}
		if(a>=3 and c=='S'){
			if(he=='M'){
				contMS++;
			}else if(he=='V'){
				contVS++;
			}else if(he=='N'){
				contNS++;
			}
		}
	}
	prom=totalDiasEstudio/contAlumno1;
	
	cout<<"Promedio= "<<prom<<fixed<<setprecision(2)<<endl;
	if(contMS>contVS and contMS>contNS){
		cout<<"Turno más elegido= Matutino"<<endl;
	}else if(contVS>contMS and contVS>contNS){
		cout<<"Turno más elegido= Vespertino"<<endl;
	}else if(contNS>contMS and contNS>contVS){
		cout<<"Turno más elegido= Nocturno"<<endl;
	}
	cout<<"Edad del alumno mayor= "<<edadAlumMayor<<endl;
	
	return 0;
}
/*
int main(){
	int cant=0;
	itemB(cant);
	return 0;
}
*/
