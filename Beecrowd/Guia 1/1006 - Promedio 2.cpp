#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double a,b,c,media;
	int notaA=2,notaB=3, notaC=5;
	
	cin>>a>>b>>c;
	
	media=((a*notaA)+(b*notaB)+(c*notaC))/(notaA+notaB+notaC);
	
	cout<<"MEDIA = "<<setprecision(1)<<fixed<<media<<endl;
	
	return 0;
}
//<<setprecision(5)<<fixed//
