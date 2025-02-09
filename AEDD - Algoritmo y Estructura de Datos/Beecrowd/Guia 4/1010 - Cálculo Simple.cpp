#include <iostream>
#include <iomanip>
using namespace std;

void precioFinal(int unidades1, int unidades2, double precio1, double precio2){
	double total=0;
	
	total=(precio1*unidades1)+(precio2*unidades2);
	cout<<"VALOR A PAGAR: R$ "<<setprecision(2)<<fixed<<total<<endl;
}
int main(int argc, char *argv[]) {
	int codigo1, unidades1, codigo2, unidades2;
	double precio1, precio2;
	
	cin>>codigo1>>unidades1>>precio1;
	cin>>codigo2>>unidades2>>precio2;
	
	precioFinal(unidades1,unidades2,precio1,precio2);
	return 0;
}

