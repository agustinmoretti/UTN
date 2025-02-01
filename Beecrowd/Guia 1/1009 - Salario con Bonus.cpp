#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double salario, ventas, total, porcentaje;
	string nombre;
	
	cin>>nombre>>salario>>ventas;
	
	porcentaje=ventas*0.15;
	total=salario+porcentaje;
	
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
	return 0;
}

