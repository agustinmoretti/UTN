#include "contador.h"

contador crear(int valor){
	contador aux;
	aux.valor=valor;
	
	return aux;
}

void incrementar(contador& c, int pasos){
	c.valor=c.valor+pasos;
}

void decrementar(contador& c, int pasos){
	c.valor=c.valor-pasos;
}

int toInteger(contador c){
	return c.valor;
}
