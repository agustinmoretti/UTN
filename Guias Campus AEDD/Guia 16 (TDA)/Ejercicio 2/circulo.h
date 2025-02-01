#ifndef CIRCULO_H
#define CIRCULO_H
#define M_PI 3.14159265358979323846
struct circulo{
	float diametro;
	float radio;
};

circulo crear_circulo(float diametro);
float perimetroC(circulo c);
float areaC(circulo c);
#endif
