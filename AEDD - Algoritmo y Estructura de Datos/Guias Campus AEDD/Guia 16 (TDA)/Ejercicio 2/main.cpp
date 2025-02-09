#include <iostream>
#include <iomanip>
#include "circulo.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "triangulo.h"
using namespace std;

int main(){
	circulo c1;
	cuadrado cdo1;
	rectangulo r1;
	triangulo t1;
	
	c1=crear_circulo(10);
	cdo1=crear_cuadrado(10);
	r1=crear_rectangulo(10,4);
	t1=crear_triangulo(10,10,6,13);
	
	cout<<"El perimetro del circulo es de "<<fixed<<setprecision(2)<<perimetroC(c1)<<endl;
	cout<<"El perimetro del cuadrado es de "<<fixed<<setprecision(2)<<perimetroCuad(cdo1)<<endl;
	cout<<"El perimetro del rectangulo es de "<<fixed<<setprecision(2)<<perimetroR(r1)<<endl;
	cout<<"El perimetro del triangulo es de "<<fixed<<setprecision(2)<<perimetroT(t1)<<endl;
	
	cout<<"El area del circulo es de "<<fixed<<setprecision(2)<<areaC(c1)<<endl;
	cout<<"El area del cuadrado es de "<<fixed<<setprecision(2)<<areaCuad(cdo1)<<endl;
	cout<<"El area del rectangulo es de "<<fixed<<setprecision(2)<<areaR(r1)<<endl;
	cout<<"El area del triangulo es de "<<fixed<<setprecision(2)<<areaT(t1)<<endl;
	
	return 0;
}
