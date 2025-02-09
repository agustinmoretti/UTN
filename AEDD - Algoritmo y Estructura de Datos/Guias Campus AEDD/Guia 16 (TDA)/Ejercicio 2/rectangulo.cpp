#include "rectangulo.h"

rectangulo crear_rectangulo(float base, float altura){
	rectangulo r;
	r.base=base;
	r.altura=altura;
	
	return r;
}
float perimetroR(rectangulo r){
	return (r.base*2)+(r.altura*2);
}
float areaR(rectangulo r){
	return (r.base*r.altura);	
}
