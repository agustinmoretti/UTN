#include <cmath>
#include "circulo.h"

circulo crear_circulo(float diametro){
	circulo c;
	c.diametro=diametro;
	c.radio=diametro/2;
	
	return c;
}
float perimetroC(circulo c){
	return (M_PI*c.diametro);
}
float areaC(circulo c){
	return (M_PI*pow(c.radio, 2));
}
