#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double a,b,media,notaA=3.5,notaB=7.5;
	
	cin>>a>>b;
	
	media=((a*notaA)+(b*notaB))/(notaA+notaB);
	
	cout<<"MEDIA = "<<setprecision(5)<<fixed<<media<<endl;
	
	return 0;
}

