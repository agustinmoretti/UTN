#include <iostream>
#define SIZE 4
#define SIZE_NAME 30

using namespace std;

struct picture_info  { 
	char name[SIZE_NAME]; 
	int date_time; 
} pictures[SIZE]; 

int main(int argc, char *argv[]) {
	picture_info * punterosFotos[SIZE];
	
	picture_info pictures[SIZE] = {
		{"foto1", 20230127},
		{"foto2", 20230128},
		{"foto3", 20230129},
		{"foto4", 20230204}
	};
	
	for(int i=0;i<SIZE;i++){
		punterosFotos[i]=&pictures[i];
	}
	
	for(int i=0;i<SIZE;i++){
		cout<<"Nombre de la foto: "<<punterosFotos[i]->name<<", Fecha: "<<punterosFotos[i]->date_time<<endl;
	}
	
	return 0;
}

