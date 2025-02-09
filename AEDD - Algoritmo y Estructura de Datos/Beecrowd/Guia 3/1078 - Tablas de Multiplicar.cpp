#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, rta=0;
	
	cin>>n;
	
	for(int i=1; i<=10; i++){
		rta=n*i;
		cout<<i<<" x "<<n<<" = "<<rta<<endl;
	}
	
	return 0;
}

