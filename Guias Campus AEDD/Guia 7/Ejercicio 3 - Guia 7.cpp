#include <iostream>
using namespace std;

void edadActual(int& d,int& m,int& a){
	int edad, diaActual=25, mesActual=5, anioActual=2024;
	
	edad=anioActual-a;
	if(mesActual<m or (mesActual==m and diaActual<d)){
		edad--;
	}
	cout<<edad<<" a�os"<<endl;
}
int main(int argc, char *argv[]) {
	int d, m, a;
	
	cin>>d>>m>>a;
	edadActual(d,m,a);
	
	return 0;
}

