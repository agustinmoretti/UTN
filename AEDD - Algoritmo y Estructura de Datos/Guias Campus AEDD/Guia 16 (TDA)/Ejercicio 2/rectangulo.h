#ifndef RECTANGULO_H
#define RECTANGULO_H
struct rectangulo{
	float base;
	float altura;
};

rectangulo crear_rectangulo(float base, float altura);
float perimetroR(rectangulo r);
float areaR(rectangulo r);
#endif
