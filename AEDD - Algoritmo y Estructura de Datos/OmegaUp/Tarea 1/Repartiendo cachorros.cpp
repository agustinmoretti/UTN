#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c,p,h,perrosRestantes;//c=cachorros, p=perros de don pancho, h=hijos de pancho+esposa
	
	cin>>c>>p>>h;
	
	perrosRestantes=(c-p)%(h+1);
	p=p+perrosRestantes;
	
	cout<<p<<endl;
	return 0;
}

