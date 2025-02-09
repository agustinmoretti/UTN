#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct libro{
	string titulo;
	string autor;
	int isbn;
	int precio;
	int stock;
	int ventas;
};
struct libroArchivo{
	char titulo[50];
	char autor[50];
	int isbn;
	int precio;
	int stock;
	int ventas;
};
int main(int argc, char *argv[]) {
	ofstream inventario;
	inventario.open("inventario.bin", ios:: binary);
	libro l;
	libroArchivo lfile;
	
	if(!inventario.is_open()){
		cout<<"Error al abrir el archivo de inventario."<<endl;
		return 1;
	}
	
	cout<<"Ingrese el titulo; ";
	getline(cin, l.titulo);
	cout<<"Ingrese el nombre del autor; ";
	getline(cin, l.autor);
	cout<<"Ingrese el isbn; ";
	cin>>l.isbn;
	cout<<"Ingrese el precio; ";
	cin>>l.precio;
	cout<<"Ingrese el stock; ";
	cin>>l.stock;
	cout<<"Ingrese las ventas; ";
	cin>>l.ventas;
	
	strncpy(lfile.titulo, l.titulo.c_str(), sizeof(lfile.titulo)-1);
	lfile.titulo[sizeof(lfile.titulo)-1]='\0';
	strncpy(lfile.autor, l.autor.c_str(), sizeof(lfile.autor)-1);
	lfile.autor[sizeof(lfile.autor)-1]='\0';
	lfile.isbn=l.isbn;
	lfile.precio=l.precio;
	lfile.stock=l.stock;
	lfile.ventas=l.ventas;
	inventario.write((char*)&lfile, sizeof(lfile));
	cout<<"Registro completado."<<endl;
	inventario.close();
	
	ifstream archivo;
	archivo.open("inventario.bin", ios:: binary);
	if(!archivo.is_open()){
		cout<<"Error al abrir el archivo para lectura."<<endl;
		return 1;
	}
	
	while(archivo.read((char*) (&lfile), sizeof(lfile))){
		cout<<lfile.titulo<<endl;
		cout<<lfile.autor<<endl;
		cout<<lfile.isbn<<endl;
		cout<<lfile.precio<<endl;
		cout<<lfile.stock<<endl;
		cout<<lfile.ventas<<endl;
	}
	archivo.close();
	
	return 0;
}

