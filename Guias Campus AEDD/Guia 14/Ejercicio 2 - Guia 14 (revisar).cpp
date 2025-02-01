#include <iostream>
#include <string>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int anio;
};
struct direccion{
	string calle;
	int numero;
	string barrio;
};
struct empleado{
	string nombre;
	string direccion;//solo pongo el barrio por temas de facilidad a la hora de ingresar manualmente los datos
	//direccion direccion1;
	fecha nacimiento;
	char sexo;
	int sueldo;
	string categoria;
	fecha fechaIngreso;
};
int main(int argc, char *argv[]) {
	empleado empleados[100];
	fecha anioActual;
	anioActual.anio=2024;//utilizo solo el año por facilidad a la hora de codificar
	
	cout<<"Ingrese los datos de los empleados: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Ingrese el nombre: ";
		cin.ignore(); 
		getline(cin,empleados[i].nombre);
		cout<<endl;
		
		cout<<"Ingrese la direccion: ";
		getline(cin,empleados[i].direccion);
		cout<<endl;
		
		cout<<"Ingrese su fecha de nacimiento: ";
		cout<<"Ingrese el dia: ";
		cin>>empleados[i].nacimiento.dia;
		cout<<"Ingrese el mes: ";
		cin>>empleados[i].nacimiento.mes;
		cout<<"Ingrese el año: ";
		cin>>empleados[i].nacimiento.anio;
		cout<<endl;
		
		cout<<"Ingrese el sexo: ";
		cin>>empleados[i].sexo;
		cout<<endl;
		
		cout<<"Ingrese el sueldo: ";
		cin>>empleados[i].sueldo;
		cout<<endl;
		
		cout<<"Ingrese la categoria: ";
		cin.ignore(); 
		getline(cin,empleados[i].categoria);
		cout<<endl;
		
		cout<<"Ingrese su fecha de ingreso: ";
		cout<<"Ingrese el dia: ";
		cin>>empleados[i].fechaIngreso.dia;
		cout<<"Ingrese el mes: ";
		cin>>empleados[i].fechaIngreso.mes;
		cout<<"Ingrese el año: ";
		cin>>empleados[i].fechaIngreso.anio;
		cout<<endl;
	}
	cout<<"Nombre del 4to empleado: "<<empleados[3].nombre<<", Sexo; "<<empleados[3].sexo<<endl;
	for(int i=0;i<5;i++){
		if(empleados[i].sueldo>57500){
			cout<<"Nombre: "<<empleados[i].nombre<<endl;
		}
	}
	for(int i=0;i<5;i++){
		int antiguedad=anioActual.anio-empleados[i].fechaIngreso.anio;
		if(antiguedad>5){
			empleados[i].sueldo*=1.15;
			cout<<"Sueldo aumentado un 15%: "<<empleados[i].sueldo<<endl;
		}
	}
	for(int i=0;i<5;i++){
		int edadEmpleado=anioActual.anio-empleados[i].nacimiento.anio;
		if(edadEmpleado<25){
			cout<<empleados[i].nombre<<", "<<edadEmpleado<<" años de edad"<<endl;
		}
	}
	for(int i=0;i<5;i++){
		if(empleados[i].direccion=="Sur"){
			cout<<empleados[i].nombre<<" vive en el barrio "<<empleados[i].direccion<<endl;
		}
	}
	for(int i=0;i<5;i++){
		if(empleados[i].direccion=="Candioti"){
			cout<<empleados[i].nombre<<" vive en el barrio "<<empleados[i].direccion<<endl;
		}
	}
	int pasada=1, k, intercambios=1;
	while(pasada<5 and intercambios){
		intercambios=0;
		for(k=0;k<5-pasada;k++){
			if(empleados[k].nombre>empleados[k+1].nombre){
				swap(empleados[k].nombre,empleados[k+1].nombre);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	for(int i=0;i<5;i++){
		cout<<empleados[i].nombre<<endl;
	}
	return 0;
}

