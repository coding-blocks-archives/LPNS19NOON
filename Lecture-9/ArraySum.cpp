// ArraySum
#include <iostream>
using namespace std;
int SUM(int *a,int n){
	// Base case
	if(n==0){
		return 0;
	}
	// Recursive Case
	int chotaSum = SUM(a+1,n-1);
	return a[0]+chotaSum;
}

int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);	
	cout<<SUM(a,n)<<endl;


	return 0; 
}