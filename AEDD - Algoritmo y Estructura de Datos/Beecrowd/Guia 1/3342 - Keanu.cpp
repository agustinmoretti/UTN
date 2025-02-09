#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,total,cBlancos,cNegros;
	cin >> n;
	
	total=n*n;
	cBlancos=(total+1)/2;
	cNegros=total/2;
	
	cout<<cBlancos<<" casas brancas e "<<cNegros<<" casas pretas"<<endl;
	
	return 0;
}

