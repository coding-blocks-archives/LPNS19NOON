// N_Queen
#include <iostream>
using namespace std;

bool isSafeToput(int board[][10],int i,int j,int n){
	for(int k=0;k<n;k++){
		if(board[i][k]||board[k][j]){
			return false;
		}
	}

	// Left Diagnol
	int r=i;
	int c=j;
	while(r>=0 && c>=0){
		if(board[r][c]){
			return false;
		}
		r--;
		c--;
	}

	r=i;
	c=j;

	while(r>=0 && c<n){
		if(board[r][c]){
			return false;
		}
		r--;
		c++;
	}

	return true;
}

bool N_Queen(int board[][10],int i,int n){
	// Base case
	if(i==n){
		// Print the board
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				if(board[k][l]){
					cout<<"Q ";
				}
				else{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	// Recursive case
	for(int j=0;j<n;j++){
		if(isSafeToput(board,i,j,n)){
			board[i][j]=1;
			bool KyaBaakibaatBani = N_Queen(board,i+1,n);
			if(KyaBaakibaatBani){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}


int main(){
	int board[10][10]={0};
	int n;
	cin>>n;

	N_Queen(board,0,n);


	return 0; 
}