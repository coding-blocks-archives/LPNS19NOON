// Scopes
#include <iostream>
using namespace std;
float pi = 3.14;

int main(){
	cout<<pi<<endl;
	float pi = 4.14;
	cout<<pi<<endl;

	pi = pi +1;
	::pi = ::pi + 100;
	cout<<::pi<<endl;

	// int i=1;
	// int x = 100;

	// for(int i=0;i<=10;i++){
	// 	x = i;
	// 	cout<<i<<" ";
	// }
	// cout<<endl;

	// cout<<x<<endl;
	// cout<<i<<endl;


	return 0;
}