#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string meses[12]={"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
	string fecha="", fechaEnFormato="";
	int numMes=0;
	
	cin>>fecha;
	
	for(int i=0;i<2;i++){
		numMes=numMes*10+(fecha[i]-'0');
	}
	
	fechaEnFormato=fecha.substr(3,1)+" de "+meses[numMes-1]+" del "+fecha.substr(4,4);
	
	cout<<fechaEnFormato<<endl;
	
	return 0;
}

