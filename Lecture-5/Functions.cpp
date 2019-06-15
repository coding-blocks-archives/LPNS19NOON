// Functions
#include <iostream>
using namespace std;

void Update(int *x){
	*x = *x + 1;
}

void Print(int *arr,int n){

	for(int i=n-1;i>=0;i--){
		// cout<<arr[i]<<" "; // arr[i] = *(arr+i)
		cout<<*(arr+i)<<" ";
	}	
}


int main(){
	int a = 10;
	int *aptr = &a;
	int b =11;

	aptr = &b;
	
	cout<<sizeof(aptr)<<endl;
	
	Update(&a);

	cout<<a<<endl;
	
	int arr[]= {1,2,3,4,5,6,7,8,9};
	cout<<sizeof(arr)<<endl;
	int n = sizeof(arr)/sizeof(int);
	Print(arr,n);

	cout<<endl;













	return 0;
}