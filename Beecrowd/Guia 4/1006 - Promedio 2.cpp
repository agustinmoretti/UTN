#include <iostream>
#include <iomanip>
using namespace std;

void promedio(double a, double b, double c){
	double media=0;
	media=((a*2)+(b*3)+(c*5))/10;
	cout<<"MEDIA = "<<setprecision(1)<<fixed<<media<<endl;
}

int main(int argc, char *argv[]) {
	double a,b,c;
	
	cin>>a>>b>>c;
	promedio(a,b,c);
	return 0;
}

