#include "triangulo.h"

triangulo crear_triangulo(float lado1, float lado2, float base, float altura){
	triangulo t;
	t.lado1=lado1;
	t.lado2=lado2;
	t.base=base;
	t.altura=altura;
	
	return t;
}
float perimetroT(triangulo t){
	return (t.lado1+t.lado2+t.base);
}
float areaT(triangulo t){
	return (t.base*t.altura)/2;	
}
