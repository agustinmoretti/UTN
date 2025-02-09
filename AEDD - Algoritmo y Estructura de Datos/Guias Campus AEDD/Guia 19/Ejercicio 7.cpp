#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <windows.h>
using namespace std;


struct imagen{
	int matrizImagen[480][640];
	int* ptrFilas[480];
};

int main(int argc, char *argv[]) {
	imagen img;
	srand(time(NULL));
	
	//inicializacion de los punteros ptrfilas y la matrizImagen en cero
	for(int i=0; i < 100; i++){
		for(int j=0; j < 640; j++){
			img.matrizImagen[i][j] = 0;
		}
	}
	
	for(int i=0; i < 480; i++){
		img.ptrFilas[i] = img.matrizImagen[i];
	}
	
	//tamaño de la imagen antes de cargarle las 100 filas
	int tamInicial = sizeof(img);
	cout<<"Tamaño de la imagen: "<<tamInicial<<endl;
	
	//ingreso de las 100 filas 
	cout<<"Llenando 100 filas..."<<endl;
	for(int i=0; i < 100; i++){
		int* temp = img.ptrFilas[i];
		for(int j=0; j < 640; j++){
			*(temp + j) = rand() % 256;
		}
	}
	Sleep(500);
	
	//tamaño de la imagen despues de cargarle las 100 filas
	int tamActual = sizeof(img);
	cout<<"Tamaño de la imagen: "<<tamActual<<endl;
	
	//llenamos la matrizImagen
	cout<<"Llenando la matriz..."<<endl;
	for(int i=100; i < 480; i++){
		int* temp = img.ptrFilas[i];
		for(int j=0; j < 640; j++){
			*(temp + j) = rand() % 256;
		}
	}
	Sleep(500);
	
	//tamaño de la imagen despues llenar la matriz
	int tamFinal = sizeof(img);
	cout<<"Tamaño de la imagen: "<<tamFinal<<endl;
	
	return 0;
}

