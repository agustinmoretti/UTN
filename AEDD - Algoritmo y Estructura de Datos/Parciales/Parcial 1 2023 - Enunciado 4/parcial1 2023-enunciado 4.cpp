#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	int Bd, Cd, w, x, xc, xd, xu;
	

	cin >> a >> b >> c >> d;
	
	Bd = (b / 10) % 10;
	Cd = (c / 10) % 10;
	
	
	if (Bd > Cd) {
		w = 10 * Bd;
	} else if (Cd > Bd){
		w = 10 * Cd;
	}

	x = 100 * (a % 10) + w + (d/100);
	xc= x/100;
	xd= (x / 10) % 10;
	xu= (x % 10);
	
	if (xc== xd && xd == xu) {
		cout << "tres digitos iguales"<<endl;
	} else if (xc != xd && xd != xu && xc != xu) {
		cout << "tres digitos distintos"<<endl;
	} else if (x == a || x == b || x == c || x == d) {
		cout << "X es igual a uno de los numeros ingresados"<<endl;
	} else{
		cout << "otro caso!"<<endl;
	}
	
	return 0;
}

