#include <iostream>
using namespace std;

int main(){
	int n;
	int a;
	cin>>n>>a;
	// int n,a,c,d,e;
	/*This is a 
	Multi line 
	comment */
	// cin>>n>>a;
	n=10;
	a=11;
	// cout<<n;
	// cout<<"Hello World";
	// cout<<'\n';
	cout<<n<<'\n'<<"Hello World"<<'\n';
	cout<<a<<"\n";

	if(a%2==0){
		cout<<"Even"<<'\n';
	}
	else{
		cout<<"Odd"<<"\n";
	}

	int i = 1;	
	while(i<=10){
		cout<<i<<" ";
		i=i+1;
	}
	cout<<'\n';

	return 0;
}