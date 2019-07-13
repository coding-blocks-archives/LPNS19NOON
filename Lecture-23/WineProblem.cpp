// WineProblem
#include <iostream>
using namespace std;

int BottomUp(int *wine,int n){
	int dp[100][100]={0};
	int day = n;
	for(int i=0;i<n;i++){
		dp[i][i] = wine[i]*day;
	}
	day--;
	for(int len = 2; len<=n; len++){
		int starti = 0;
		int endi = n-len;
		int i =starti;
		while(i<=endi){
			int j = i + len -1;
			int op1 = wine[i]*day + dp[i+1][j];
			int op2 = wine[j]*day + dp[i][j-1];
			dp[i][j] = max(op1,op2);
			i++;
		}
		day--;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[0][n-1];
}

int main(){
	int wine[]={2,3,5,1,4};
	int n = 5;

	cout<<BottomUp(wine,n)<<endl;


	return 0;
}