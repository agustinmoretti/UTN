#include <iostream>
#define cantNadadores 3
using namespace std;

bool hayArg(int cont3){
	bool nacionalidadArg;
	for(int i=0;i<cont3;i++){
		cin>>nacionalidadArg;
		if(nacionalidadArg==true){
			return true;
		}
	}
	return false;
}
int main(int argc, char *argv[]) {
	int e,ta,cont1=0,cont2=0,cont3=0,contNadadoras=0,sumaEdades=0,promEdades=0;
	char s;
	bool prueba1=false,prueba2=false,prueba3=false;
	
	for(int i=0;i<cantNadadores;i++){
		cin>>s>>e>>prueba1>>prueba2>>prueba3>>ta;
		
		if(prueba1==true){
			cont1++;
			if(s=='f'){
				contNadadoras++;
			}
		}
		if(prueba2==true){
			cont2++;
			if(s=='f' and prueba1==false){
				contNadadoras++;
			}
		}
		if(prueba3==true){
			cont3++;
			if(s=='f' and prueba1==false and prueba2==false){
				contNadadoras++;
			}
		}
		sumaEdades+=e;
	}
	promEdades=sumaEdades/cantNadadores;
	
	cout<<"El total de nadadoras que participaron en las 3 pruebas: "<<contNadadoras<<endl;
	cout<<"El promedio de edad de los nadadores es de "<<promEdades<<" años"<<endl;
	cout<<hayArg(cont3)<<endl;
	return 0;
}

