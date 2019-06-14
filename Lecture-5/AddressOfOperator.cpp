// AddressOfOperator
#include <iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4};
	cout<<arr<<endl;
	cout<<&arr[0]<<endl;
	cout<<&arr<<endl<<endl;

	int a = 10;
	float b = 10.43;

	cout<<a<<endl;
	cout<<&a<<endl;

	cout<<b<<endl;
	cout<<&b<<endl;


	return 0;
}