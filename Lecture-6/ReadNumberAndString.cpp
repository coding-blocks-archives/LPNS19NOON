// ReadNumberAndString
#include <iostream>
using namespace std;

int main(){
	int a;
	char ch[100];

	cin>>a; // Input a number
	// cin.get();
	cin.ignore();
	cin.getline(ch,100); // Read a string

	cout<<a<<endl;
	cout<<ch<<endl;
	

	return 0;
}