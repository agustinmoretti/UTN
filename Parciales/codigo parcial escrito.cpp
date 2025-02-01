#include <iostream>
#include <string>
using namespace std;

struct alumno{
	string nombre;
	string apellido;
	int anio;
};
struct listaAlumnos{
	alumno lista[1450];
	int tl;
};
bool isdigit(char c){
	if(c >= '0' && c <= '9') return true;
	else return false;
}
bool isLetra(char c){
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return true;
	else return false;
}
int corregirNum(string anioRoto){
	int anioReconstruido=0;
	
	anioReconstruido=(anioRoto[3]-'0')*1000;
	anioReconstruido+=(anioRoto[2]-'0')*100;
	anioReconstruido+=(anioRoto[1]-'0')*10;
	anioReconstruido+=(anioRoto[0]-'0');
	
	return anioReconstruido;
}
alumno reconstruirLinea(const char filaRota[]){
	alumno filaReconstruida;
	int i=0;
	string nombreReconstruido="", anioRoto="", apellidoReconstruido="";
	
	while(filaRota[i]!='$'){
		if(isLetra(filaRota[i]))nombreReconstruido+=filaRota[i];
		if(isdigit(filaRota[i]))anioRoto+=filaRota[i];
		i++;
	}
	filaReconstruida.nombre=nombreReconstruido;
	filaReconstruida.anio=corregirNum(anioRoto);
	
	string filaRotaString=string(filaRota);
	int simboloPeso=filaRotaString.find('$');
	
	filaRotaString=filaRotaString.substr(simboloPeso+1, filaRotaString.length());
	
	for(int i=0; i<filaRotaString.length();i++){
		if(isLetra(filaRotaString[i])) apellidoReconstruido+=filaRotaString[i];
	}
	filaReconstruida.apellido=apellidoReconstruido;
	
	return filaReconstruida;
}
bool contieneDanger(char m[]){
	string fila=string(m);
	
	return fila.find("DANGER") != string::npos;
}
listaAlumnos reconstruyeInfo(char m[][30]){
	listaAlumnos ret;
	ret.tl=0;
	
	for(int i=0;i<1450;i++){
		if(!contieneDanger(m[i])){
			ret.lista[ret.tl]=reconstruirLinea(m[i]);
			ret.tl++;
		}
	}
	
	return ret;
}
listaAlumnos mezclarListasOrdenadas(listaAlumnos l1, listaAlumnos l2){
	
}
int main(int argc, char *argv[]) {
	
	return 0;
}

