// WavePrint
#include <iostream>
using namespace std;

int main(){
	int a[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	for(int row=0;row<4;row++){
		for(int col=0;col<4;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}


	// -------------- WAVE PRINT -----------------
	for(int col=0;col<4;col++){
		if(col%2==0){
			for(int row = 0; row < 4 ; row++){
				cout<<a[row][col]<<" ";
			}
		}
		else{
			for(int row = 3; row >= 0 ; row--){
				cout<<a[row][col]<<" ";
			}
		}

	}
	cout<<endl;


	// ---------------------------------------------
	

	return 0;
}
