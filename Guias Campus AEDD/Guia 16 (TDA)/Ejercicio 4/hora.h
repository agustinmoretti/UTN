#ifndef HORA_H
#define HORA_H
struct hora{
	int hs;
	int min;
	int seg;
};

hora ponerAHora (int hs, int min, int seg);
void mostrar24(hora h);
void mostrar12(hora h);
void adelantar (hora & h, int min);
void atrasar (hora &h, int mins);
int diferenciaEnMinutos (hora h1, hora h2);
int diferenciaEnSegundos(hora h1, hora h2);
#endif
