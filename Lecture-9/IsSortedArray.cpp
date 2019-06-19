#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	// Base case
	if(n==0||n==1){
		return true;
	}
	// Recursive case
	bool KyaChotaSortedHai = isSorted(a+1,n-1);
	if(a[0]<=a[1] && KyaChotaSortedHai==true){
		return true;
	}
	else{
		return false;
	}

}


int main(){
	int a[]={1,3,4,5,6,7,0};
	int n=sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}

	return 0; 
}