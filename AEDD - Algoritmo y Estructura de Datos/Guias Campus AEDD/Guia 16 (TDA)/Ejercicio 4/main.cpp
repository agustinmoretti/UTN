#include<iostream>
#include "hora.h"
using namespace std;

struct evento{
	string nombre;
	int duracion;
};
void horariosEventos(evento eventos[], hora h,int cantEventos){
	hora horaInicial=h;
	hora horaFinal;
	
	for(int i=0;i<cantEventos;i++){
		cout<<eventos[i].nombre<<endl;
		
		cout<<"Hora de inicio: ";
		mostrar24(horaInicial);
		
		horaFinal=horaInicial;
		adelantar(horaFinal,eventos[i].duracion);
		
		cout<<"Hora de finalizacion: ";
		mostrar24(horaFinal);
		cout<<"----------------------------"<<endl;
	}
	horaInicial=horaFinal;
}
int main (int argc, char *argv[]) {
	int hs, min, seg, cantEventos=0;
	hora h;
	evento eventos[10];
	
	cout<<"Ingrese la hora actual(formato de 24hs): "<<endl;
	cout<<"Hora: "<<endl;
	cin>>hs;
	cout<<"Minutos: "<<endl;
	cin>>min;
	cout<<"Segundos: "<<endl;
	cin>>seg;
	
	h=ponerAHora(hs, min, seg);
	
	cout<<"Ingrese la cantidad de eventos que va a registrar(maximo 10 eventos): "<<endl;
	cin>>cantEventos;
	
	for(int i=0;i<cantEventos;i++){
		cout<<"Evento "<<i+1<<": ";
		cin>>eventos[i].nombre;
		cout<<"Duracion(mins): "<<endl;
		cin>>eventos[i].duracion;
	}
	
	cout<<"Horarios de los eventos: "<<endl;
	horariosEventos(eventos,h,cantEventos);
	
	return 0;
}

