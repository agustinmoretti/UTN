#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	bool encontrado=0;

	

		for(int a=0;a*a<=abs(n);a++){
			int bAux= abs(n) - a*a;
			int b=sqrt(bAux);
			if(b*b==bAux){
				encontrado=true;
				break;
			}
		}
		if(encontrado){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	return 0;
}

