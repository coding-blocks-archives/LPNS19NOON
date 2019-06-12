// CallByValue
#include <iostream>
using namespace std;

void SWAP(int &x,int &y){
	int temp = x;
	x=y;
	y=temp;	
}


int main(){
	int a = 10;
	int b = 20;
	cout<<"Before swapping a: "<<a<<" b: "<<b<<endl;
	SWAP(a,b);
	cout<<"After swapping a: "<<a<<" b: "<<b<<endl;


	return 0;
}