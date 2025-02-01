#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct autos{
	int codigo;//codigos de cada uno de los autos
	int categoria;//1 a 7
	float importeAlquiler;//importe del alquiler por km
};
struct alquiler{
	int codigoA;//codigo de auto que fue alquilado
	int nroCliente;//1 a 200
	int diasAlq;//total de dias de alquiler
	float kmRecorridos;
};
void intercambio(int& a, int& b){
	int aux=a;
	a=b;
	b=aux;
}
int main(int argc, char *argv[]) {
	srand(time(0));
	
	autos autos[300];
	alquiler alquileres[300];
	int listado[201];
	int alquileresPorCliente[201];//carga la cantidad de autos que alquilo cada cliente
	int autoMasRecaudo[300][2];//cuenta lo que recaudo cada auto
	
	//carga aleatoria de los valores 
	for(int i=0;i<300;i++){
		autos[i].codigo=rand()%9000+1000;
		autos[i].categoria=rand()%7+1;
		alquileres[i].nroCliente=rand()%200+1;
		alquileres[i].diasAlq=rand()%31+1;
		alquileres[i].kmRecorridos=rand()%1000+1;
	}
	for(int i=0;i<300;i++){
		int numeroRandom=rand()%300;
		alquileres[i].codigoA=autos[numeroRandom].codigo;
		autos[i].importeAlquiler=rand()%2500+1000;
	}
	
	//copia los codigos de los autos
	for(int i=0;i<300;i++){
		autoMasRecaudo[i][0]=autos[i].codigo;
	}
	
	//carga del listado del importe total de cada nro cliente
	for(int i=0;i<300;i++){
		for(int j=0;j<300;j++){
			if(autos[i].codigo==alquileres[j].codigoA){
				listado[alquileres[j].nroCliente]=listado[alquileres[j].nroCliente]+(autos[i].importeAlquiler*alquileres[j].kmRecorridos);
				
				alquileresPorCliente[alquileres[j].nroCliente]++;
				
				if(autos[i].codigo==autoMasRecaudo[i][0]){
					autoMasRecaudo[i][1]=autoMasRecaudo[i][1]+(autos[i].importeAlquiler*alquileres[j].kmRecorridos);
				}
			}
		}
	}
	
	//carga de vectores de datos pedidos por el problema
	int autosNoAlq[300][2];//carga la cantidad de veces que fue alquilado un auto en base a su codigo
	int catCont[8];//cuenta la categoria de auto que se alquilo mas veces
	
	for(int j=0;j<2;j++){
		for(int i=0;i<300;i++){
			if(j==0){
				autosNoAlq[i][j]=autos[i].codigo;//copia los codigos de los autos
			}else if(j==1){
				if(autosNoAlq[i][j]==alquileres[i].codigoA){
					autosNoAlq[i][j]++;//suma cada vez que un auto fue alquilado en base a su codigo
				}
			}
		}
	}
	
	for(int i=0;i<300;i++){
		if(autos[i].codigo==alquileres[i].codigoA){
			catCont[autos[i].categoria]++;
		}
	}
	int indiceCat,catMasAlq=catCont[1];//indice categoria mas alquilada, categoria con mas alquileres
	for(int i=2;i<8;i++){
		if(catCont[i]>catMasAlq){
			catMasAlq=catCont[i];
			indiceCat=i;
		}
	}
	
	//salidas
	int pasada=1, k, intercambios=1;//revisar!! deberia usar una matriz para guardar y ordenar los numeros de los clientes para mostrarlos por pantalla
	while(pasada<201 and intercambios){
		intercambios=0;
		for(k=1;k<201-pasada;k++){
			if(listado[k]<listado[k+1]){
				intercambio(listado[k],listado[k+1]);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	for(int i=1;i<201;i++){
		if(listado[i]>1500){
			cout<<"Nro. cliente: "<<i<<", Total de $ abonados en alquiler: "<<listado[i]<<endl;
		}
	}
	
	for(int i=0;i<300;i++){
		if(autosNoAlq[i][1]==0){
			cout<<"Codigo de auto no alquilado: "<<autosNoAlq[i][0]<<endl;
		}
	}
	
	for(int i=1;i<201;i++){
		if(alquileresPorCliente[i]>2){
			cout<<"El cliente "<<i<<" alquilo mas de dos autos."<<endl;
		}
	}
	
	cout<<"La categoria con mayor cantidad de alquileres fue la categoria "<<indiceCat<<endl;
	
	int codAuto=0, dineroMaxgenerado=autoMasRecaudo[0][1];//codigo del auto que mas genero, mayor cantidad de dinero generada por el auto
	for(int i=1;i<300;i++){
		if(dineroMaxgenerado<autoMasRecaudo[i][1]){
			dineroMaxgenerado=autoMasRecaudo[i][1];
			codAuto=autoMasRecaudo[i][0];
		}
	}
	cout<<"El auto con el codigo "<<codAuto<<" fue el que genero la mayor cantidad de dinero."<<endl;
	
	return 0;
}

