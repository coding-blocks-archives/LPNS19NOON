// Fibonacci
#include <iostream>
using namespace std;
int fibo(int n){
	// Base case
	if(n==0||n==1){
		return n;
	}
	// Recursive case
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;

	return 0; 
}