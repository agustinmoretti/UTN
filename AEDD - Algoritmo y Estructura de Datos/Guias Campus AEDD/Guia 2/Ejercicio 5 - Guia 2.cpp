#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char *argv[]) {
	
	cout<<"bool: "<<sizeof(bool)<<" bytes"<<endl;
	cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
	cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
	cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
	cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
	cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
	cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
	
	cout<<endl;
	
	cout<<"Valores maximos: "<<endl;
	cout<<"bool: "<<numeric_limits<bool>::max()<<endl;
	cout<<"char: "<<numeric_limits<char>::max()<<endl;
	cout<<"short: "<<numeric_limits<short>::max()<<endl;
	cout<<"int: "<<numeric_limits<int>::max()<<endl;
	cout<<"long: "<<numeric_limits<long>::max()<<endl;
	cout<<"float: "<<numeric_limits<float>::max()<<endl;
	cout<<"double: "<<numeric_limits<double>::max()<<endl;
	
	cout<<endl;
	
	cout<<"Valores minimos: "<<endl;
	cout<<"bool: "<<numeric_limits<bool>::min()<<endl;
	cout<<"char: "<<numeric_limits<char>::min()<<endl;
	cout<<"short: "<<numeric_limits<short>::min()<<endl;
	cout<<"int: "<<numeric_limits<int>::min()<<endl;
	cout<<"long: "<<numeric_limits<long>::min()<<endl;
	cout<<"float: "<<numeric_limits<float>::min()<<endl;
	cout<<"double: "<<numeric_limits<double>::min()<<endl;
	return 0;
}

