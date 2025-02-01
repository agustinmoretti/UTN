#include <iostream>
using namespace std;

struct cuenta{
	string id;
	string clave="aedd2024";
};
int main(int argc, char *argv[]) {
	//el listado es resumido en 2 casos solo para que sea mas practico el testeo, deberia funcionar para lista[100]
	bool usuarioVerif=false;
	cuenta listado[5];
	string idVerif;
	string contraseniaVerif;
	listado[0].id="ar43843380";
	listado[0].clave="43843380";
	listado[1].id="ar11111113";

	cout<<"Bienvenido al sistema"<<endl;
	cout<<"Inicie sesion para continuar"<<endl;
	cout<<"Usuario: ";
	getline(cin,idVerif);
	for(int i=0;i<5;i++){
		if(idVerif==listado[i].id){
			usuarioVerif=true;
			if(listado[i].clave=="aedd2024"){
				cout<<"Este es su primer inicio de sesion, por favor actualice su contraseña."<<endl;
				cout<<"Contraseña: ";
				getline(cin,listado[i].clave);
				
				cout<<"Vuelva a ingresar la contraseña para entrar al sistema: ";
				getline(cin,contraseniaVerif);
				
				if(contraseniaVerif==listado[i].clave){
					cout<<"Inicio exitoso, bienvenido al sistema."<<endl;
				}else{
					cout<<"Contraseña erronea, reinicie el programa."<<endl;
				}
			}else{
				cout<<"Contraseña: ";
				getline(cin,contraseniaVerif);
				if(contraseniaVerif==listado[i].clave){
					cout<<"Inicio exitoso, bienvenido al sistema."<<endl;
				}else{
					cout<<"Contraseña erronea, reinicie el programa."<<endl;
				}
			}
		}
	}
	if(!usuarioVerif){
		cout<<"Usuario no encontrado, primero debe ser matriculado desde alumnado."<<endl;
	}
	return 0;
}

