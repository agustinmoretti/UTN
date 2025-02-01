#include <iostream>
#include <cmath>

#define PI 3.141592

using namespace std;

int main(int argc, char *argv[]) {
	double r, area, circunferencia;
	
	cin>>r;
	
	area=PI*(pow(r,2));
	circunferencia=2*PI*(pow(r,2));
	
	cout<<"area: "<<area<<endl;
	cout<<"circunferencia: "<<circunferencia<<endl;
	return 0;
}

