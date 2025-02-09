#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void volumen(int r){
	double vol=0, pi=3.14159;
	
	vol=(4/3.0)*pi*pow(r,3);
	cout<<"VOLUME = "<<setprecision(3)<<fixed<<vol<<endl;
}
int main(int argc, char *argv[]) {
	int r;
	
	cin>>r;
	volumen(r);
	return 0;
}

