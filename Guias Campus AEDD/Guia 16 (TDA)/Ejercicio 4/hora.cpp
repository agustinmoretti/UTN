#include <iostream>
#include <cmath>
#include <string>
#include "hora.h"
using namespace std;

hora ponerAHora (int hs, int min, int seg){
	hora h;
	
	h.hs=hs;
	h.min=min;
	h.seg=seg;
	
	return h;
}
void mostrar24(hora h){
	cout<<h.hs<<" h : "<<h.min<<" m : "<<h.seg<<" s"<<endl;
}
void mostrar12(hora h){
	int hs12=h.hs%12;
	string am="a.m.";
	string pm="p.m.";
	
	if(hs12==0)hs12=12;
	
	if(h.hs>=12){
		cout<<hs12<<" h : "<<h.min<<" m : "<<h.seg<<" s, "<<pm<<endl;
	}else{
		cout<<hs12<<" h : "<<h.min<<" m : "<<h.seg<<" s"<<am<<endl;
	}
}
void adelantar (hora & h, int min){
	int totalMins=h.min+min;
	
	h.hs+=(totalMins/60)%24;
	h.min=totalMins%60;
}
void atrasar (hora &h, int mins){
	int totalMins=(h.hs*60)+h.min - mins;
	
	while(totalMins<0){
		totalMins=totalMins+(24*60);
	}
	h.hs=(totalMins/60)%24;
	h.min=totalMins%60;
}
int diferenciaEnMinutos (hora h1, hora h2){
	int totalMinsh1=(h1.hs*60)+h1.min;
	int totalMinsh2=(h2.hs*60)+h2.min;
	
	return abs(totalMinsh1-totalMinsh2);
}
int diferenciaEnSegundos(hora h1, hora h2){
	int totalSegh1=(h1.hs*3600)+(h1.min*60)+h1.seg;
	int totalSegh2=(h2.hs*3600)+(h2.min*60)+h2.seg;
	
	return abs(totalSegh1-totalSegh2);
}

