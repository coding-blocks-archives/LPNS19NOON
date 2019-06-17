// WavePrint
#include <iostream>
using namespace std;

void SPIRALPRINT(int a[][4],int r,int c){
	int sr =0,sc = 0, er = r-1, ec = c-1;

	while(sr<=er && sc<=ec){
		for(int j=sc;j<=ec;j++){
			cout<<a[sr][j]<<" ";
		}
		sr++;

		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;
		if(sr<er){
			for(int j=ec;j>=sc;j--){
				cout<<a[er][j]<<" ";
			}
			er--;
		}	
		if(sc<ec){
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			sc++;
		}
	}
	cout<<endl;

}


int main(){
	int a[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int r,c;
	cout<<"Enter r and c : ";
	cin>>r>>c;


	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	SPIRALPRINT(a,r,c);
	

	return 0;
}
