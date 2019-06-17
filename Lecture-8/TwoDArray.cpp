// TwoDArray
#include <iostream>
using namespace std;

int main(){
	// char a[][40]={
	// 	"ABC",
	// 	"DEF",
	// 	"GHI",
	// 	"Kartik",
	// 	"Aaroh",
	// 	"Aditya"
	// 	// {'A','B','C','\0'},
	// 	// {'D','E','F','\0'},
	// 	// {'G','H','I','\0'}
	// };

	// for(int row=0;row<6;row++){
	// 	for(int col = 0; a[row][col]!='\0';col++){
	// 		cout<<a[row][col]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// for(int i=0;i<6;i++){
	// 	cout<<a[i]<<endl;
	// }

	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;

	// int a[10][10]={
	// 	{1,2,3},
	// 	{4,5,6}
	// };
	int a[10][10];
	cout<<"Enter Row and Column : ";
	int r,c;
	cin>>r>>c;
	int number=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j] = number;
			number++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// cout<<endl;

	// cout<<a[0][2]<<" "<<a[1][1]<<endl;
		

	return 0;
}
