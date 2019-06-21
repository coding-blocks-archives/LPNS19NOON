// StringToInt
#include <iostream>
using namespace std;
int StringToInt(char* a,int n){
	// Base case	
	if(n==0){
		return 0;
	}

	// Recursive case
	int last_digit = a[n-1] - '0';
	int ans = StringToInt(a,n-1)*10+last_digit;
	return ans;
}

int main(){
	char in[]="12345";

	cout<<StringToInt(in,5)<<endl;

	return 0; 
}