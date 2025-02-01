#include <iostream>
using namespace std;

int conviveAlMenos3(int cont18){
	int personas;
	cin>>personas;
	
	if(cont18==1){
		if(personas>=3){
			return 1;
		}else{
			return 0;
		}
	}else{
		if(personas>=3){
			return 1+conviveAlMenos3(cont18-1);
		}else{
			return conviveAlMenos3(cont18-1);
		}
	}
}
int main(int argc, char *argv[]) {
	int c,e,contF=0,contM=0,cont60=0,cont18=0,contVacunados=0;
	char s;
	float tc, porcentajeDeRiesgo;
	bool vacunado=false;
	
	cin>>c;
	
	for(int i=0;i<c;i++){
		cin>>s>>e>>tc>>vacunado;
		if(s=='f' and tc>37){
			contF++;
		}else if(s=='m' and tc>37){
			contM++;
		}
		if(e>60 and vacunado==true){
			cont60++;
		}
		if(e<18){
			cont18++;
		}
		if(vacunado==true){
			contVacunados++;
		}
	}
	porcentajeDeRiesgo=(cont60/contVacunados)*100.0;
	
	cout<<"Hubo "<<contF<<" mujeres con mas de 37°C"<<endl;
	cout<<"Hubo "<<contM<<" hombres con mas de 37°C"<<endl;
	cout<<"Del total de vacunados hubo "<<porcentajeDeRiesgo<<"% de personas de riesgo"<<endl;
	cout<<"Viven al menos con 3 personas "<<conviveAlMenos3(cont18)<<" individuos"<<endl;
	
	return 0;
}

