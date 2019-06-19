// PrintInc&DecArray
#include <iostream>
using namespace std;

void Print(int *a,int n){
	// Base case
	if(n==0){
		return;
	}

	// Recursive case
	Print(a+1,n-1);
	cout<<a[0]<<" ";

}

void Print1(int *a,int n){
	// Base case
	if(n==0){
		return;
	}

	cout<<a[n-1]<<" ";
	Print1(a,n-1);
}

int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	Print(a,n);
	cout<<endl;
	Print1(a,n);
	cout<<endl;
	return 0; 
}