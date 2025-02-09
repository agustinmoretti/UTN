#include <iostream>
using namespace std;

void distancia(int x, int y, int dist){
	int tiempo=0;
	
	tiempo=dist*2;
	cout<<tiempo<<" minutos"<<endl;
}
int main(int argc, char *argv[]) {
	int x=60, y=90, dist;
	
	cin>>dist;
	distancia(x,y,dist);
	return 0;
}

