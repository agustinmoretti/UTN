#include "cuadrado.h"

cuadrado crear_cuadrado(float lado){
	cuadrado c;
	c.lado=lado;
	
	return c;
}
float perimetroCuad(cuadrado c){
	return (c.lado*4);
}
float areaCuad(cuadrado c){
	return (c.lado*c.lado);
}
