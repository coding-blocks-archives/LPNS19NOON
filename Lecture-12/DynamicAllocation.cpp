// DynamicAllocation
#include <iostream>
using namespace std;

int* CreateArray(int n){
	int* arr = new int[n];

	for(int i=0;i<n;i++){
		arr[i] = i;
	}
	return arr;	
}



int main(){

	int *a = new int; // Heap ke andar ek int bucket create ho jaegi

	*a = 10;
	cout<<*a<<endl;
	
	delete a; // Deletes the int bucket pointed by a
	a = NULL;
	int n;
	cin>>n;
	int* arr1 = CreateArray(n);

	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

	delete []arr1; // Deletes the array pointed by arr
	arr1 =NULL;

	return 0; 
}