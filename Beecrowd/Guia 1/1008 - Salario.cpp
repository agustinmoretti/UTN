#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int nroEmpleado, hs;
	double precioHs, salario;
	
	cin>>nroEmpleado>>hs>>precioHs;
	
	salario=hs*precioHs;
	
	cout<<"NUMBER = "<<nroEmpleado<<endl;
	cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salario<<endl;
	
	return 0;
}

