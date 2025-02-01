#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double x,y,z,resultado,pi;
	
	cin>>x>>y>>z;
	pi=3.141592653589793;
	
	resultado=(x+x*(y+pow(z,2)))/((x+pi)*(y+pi));
	
	cout<<fixed<<setprecision(6)<<resultado<<endl;
	return 0;
}

