// TertiaryOperator
#include <iostream>
using namespace std;

int main(){
	int a;
	a = 10;

	a%2==0?cout<<"Even":cout<<"Odd";
	cout<<endl;

	bool ans = a%2==0?true:false;
	cout<<ans<<endl;

	return 0;
}