// SwitchCase
#include <iostream>
using namespace std;

int main(){
	char ch;
	int a = 10;
	cin>>ch;

	switch(ch){
		case 'n':
		case 'N': cout<<"North"<<endl;
					a = a + 100;
					break;
		case 'e':
		case 'E': cout<<"East"<<endl;
					break;
		case 'w':
		case 'W': cout<<"West"<<endl;
					break;
		case 'S': cout<<"South"<<endl;
					break;
		default : cout<<"Not defined"<<endl;
	};

	cout<<a<<endl;
	return 0;
}