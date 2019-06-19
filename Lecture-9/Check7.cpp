// Check7
#include <iostream>
using namespace std;

bool Check7(int *a,int n){
	// Base case
	if(n==0){
		return false;
	}

	// Recursive case
	if(a[0]==7){
		return true;
	}
	bool KyaBaakiMei7Milla = Check7(a+1,n-1);
	return KyaBaakiMei7Milla;

}

int first7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}
	int indx = first7(a,n,i+1);
	return indx;
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}
	if(a[i]==7){
		int PuranaIndx = i;
		int AageKaIndx = last7(a,n,i+1);
		if(AageKaIndx>PuranaIndx){
			return AageKaIndx;
		}
		else{
			return PuranaIndx;
		}
	}
	int indx = last7(a,n,i+1);
	return indx;
}


int main(){
	int a[]={7,3,5,8,9,5};
	int n=sizeof(a)/sizeof(int);

	cout<<last7(a,n,0)<<endl;

	return 0; 
}