#include <iostream>
#include <string>
using namespace std;

struct puntoPlano{
	int x=0;
	int y=0;
};
struct linea{
	puntoPlano p1;
	puntoPlano p2;
};
struct fecha{
	int dia;
	int mes;
	int anio;
};
struct datosIndividuo{
	string nombre;
	string apellido;
	fecha nacimiento;
	int dni=0;
	
};
struct datosEstudiante{
	string nombre;
	string apellido;
	int legajo=0;
	int dni=0;
};
struct listaAlumnos{
	datosEstudiante estudiantes[40];
};
struct datosEmpleado{
	string nombre;
	string apellido;
	int dni=0;
	int sueldo=0;
};
struct naipe{
	int numero;
	string palo[4]={"Espada", "Basto", "Oro", "Copa"};
};
struct mazoNaipes{
	naipe naipes[50];
};
struct libro{
	string nombre;
	string autor;
	int paginas=0;
	
};
struct inventarioLibros{
	libro libros[10];
};
int main(int argc, char *argv[]) {
	//un punto en el plano
	puntoPlano punto;
	/*
	cout<<"Ingrese la coordenada x: ";
	cin>>punto.x;
	cout<<endl;
	
	cout<<"Ingrese la coordenada y: ";
	cin>>punto.y;
	cout<<endl;
	
	cout<<"P("<<punto.x<<","<<punto.y<<")"<<endl;
	*/
	//una linea
	linea linea1;
	/*//ingresa P1
	cout<<"Ingrese la coordenada x1: ";
	cin>>linea1.p1.x;
	cout<<endl;
	
	cout<<"Ingrese la coordenada y1: ";
	cin>>linea1.p1.y;
	cout<<endl;
	//ingresa P2
	cout<<"Ingrese la coordenada x2: ";
	cin>>linea1.p2.x;
	cout<<endl;
	
	cout<<"Ingrese la coordenada y2: ";
	cin>>linea1.p2.y;
	cout<<endl;
	
	cout<<"P1("<<linea1.p1.x<<","<<linea1.p1.y<<")"<<endl;
	cout<<"P2("<<linea1.p2.x<<","<<linea1.p2.y<<")"<<endl;
	*/
	//una fecha
	fecha fecha1;
	/*
	cout<<"Ingrese el dia: ";
	cin>>fecha1.dia;
	cout<<endl;
	
	cout<<"Ingrese el mes: ";
	cin>>fecha1.mes;
	cout<<endl;

	cout<<"Ingrese el año: ";
	cin>>fecha1.anio;
	cout<<endl;

	cout<<fecha1.dia<<"/"<<fecha1.mes<<"/"<<fecha1.anio<<endl;
	*/
	//datos de un individuo
	datosIndividuo persona;
	/*
	cout<<"Ingrese el nombre: ";
	getline(cin,persona.nombre);
	cout<<endl;
	
	cout<<"Ingrese el apellido: ";
	getline(cin,persona.apellido);
	cout<<endl;
	
	cout<<"Ingrese su fecha de nacimiento: ";
	cout<<"Ingrese el dia: ";
	cin>>persona.nacimiento.dia;
	cout<<"Ingrese el mes: ";
	cin>>persona.nacimiento.mes;
	cout<<"Ingrese el año: ";
	cin>>persona.nacimiento.anio;
	cout<<endl;
	
	cout<<"Ingrese su dni: ";
	cin>>persona.dni;
	cout<<endl;
	
	cout<<persona.nombre<<" "<<persona.apellido<<", Dni: "<<persona.dni<<endl;
	cout<<"Fecha de nacimiento:"<<persona.nacimiento.dia<<"/"<<persona.nacimiento.mes<<"/"<<persona.nacimiento.anio<<endl;
	*/
	//datos de un estudiante
	datosEstudiante estudiante;
	
	cout<<"Ingrese el nombre: ";
	getline(cin,estudiante.nombre);
	cout<<endl;
	
	cout<<"Ingrese el apellido: ";
	getline(cin,estudiante.apellido);
	cout<<endl;
	
	cout<<"Ingrese su legajo: ";
	cin>>estudiante.legajo;
	cout<<endl;
	
	cout<<"Ingrese su dni: ";
	cin>>estudiante.dni;
	cout<<endl;
	
	cout<<estudiante.nombre<<" "<<estudiante.apellido<<", Dni: "<<estudiante.dni<<", Legajo: "<<estudiante.legajo<<endl;
	return 0;
}

