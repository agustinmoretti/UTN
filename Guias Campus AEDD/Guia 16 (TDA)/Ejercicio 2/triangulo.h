#ifndef TRIANGULO_H
#define TRIANGULO_H
struct triangulo{
	float lado1;
	float lado2;
	float base;
	float altura;
};

triangulo crear_triangulo(float lado1, float lado2, float base, float altura);
float perimetroT(triangulo t);
float areaT(triangulo t);
#endif
