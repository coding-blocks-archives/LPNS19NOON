// DefaultArguments
#include <iostream>
using namespace std;

int SUM(int a=0,int b=0,int c=0){
	return (a+b+c);
}


int main(){
	cout<<SUM(1,2,3)<<endl;
	cout<<SUM(1,2)<<endl;
	cout<<SUM(1)<<endl;
	cout<<SUM()<<endl;
	

	return 0;
}