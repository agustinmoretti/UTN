#include <iostream>
#include <string>
using namespace std;

bool registrar(string usuario){
	int longitud=usuario.length();
	bool empiezaConLetra=((usuario[0]>='a' and usuario[0]<='z')or(usuario[0]>='A' and usuario[0]<='Z'));
	if(empiezaConLetra and longitud==8){
		return true;
	}else{
		return false;
	}
}
int main(int argc, char *argv[]) {
	string usuario;
	
	cout<<"Ingrese su usuario(debe contener 8 caracteres y comenzar con una letra): ";
	getline(cin, usuario);
	
	if(registrar(usuario)){
		cout<<"El nombre de usuario es valido"<<endl;
	}else{
		cout<<"El nombre de usuario no es valido. Intente ingresando otro nombre de usuario."<<endl;
	}
	
	
	return 0;
}

