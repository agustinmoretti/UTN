#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	double r, area, volumen;
	
	cin>>r;
	
	area=(4*M_PI)*(pow(r,2));
	volumen=(1.33*M_PI)*(pow(r,3));
	
	cout<<"Area: "<<area<<endl;
	cout<<"Volumen: "<<volumen<<endl;
	return 0;
}

