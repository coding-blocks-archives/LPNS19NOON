// Knapsack
#include <iostream>
#include <climits>
using namespace std;

int Knapsack(int *price,int *wt,int n,int capacity,int dp[][100]){
	// Base 
	if(n==0||capacity == 0){
		dp[n][capacity] = 0;
		return 0;
	}
	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}
	// Recrusive case
	int inc,exc;
	if(wt[n-1]<=capacity){
		inc = price[n-1] + Knapsack(price,wt,n-1,capacity-wt[n-1],dp);
	}
	exc = Knapsack(price,wt,n-1,capacity,dp);

	dp[n][capacity] = max(inc,exc);
	return dp[n][capacity];
}

int BottomUp(int *price,int *wt,int N,int capacity){
	int dp[100][100]={0};

	for(int n=1;n<=N;n++){
		for(int w=1;w<=capacity;w++){
			int inc=INT_MIN,exc=INT_MIN;
			if(wt[n-1]<=w){
				inc = price[n-1]+dp[n-1][w-wt[n-1]];
			}
			exc = 0 + dp[n-1][w];
			dp[n][w] = max(inc,exc);
		}
	}
	for(int n=0;n<=N;n++){
		for(int w=0;w<=capacity;w++){
			cout<<dp[n][w]<<" ";
		}
		cout<<endl;
	}

	return dp[N][capacity];

}


int main(){
	int price[]={2,12,12,21};
	int wt[]={1,2,3,4};
	int n = sizeof(price)/sizeof(int);

	int capacity = 5;
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j] = -1;
		}
	}
	cout<<Knapsack(price,wt,n,capacity,dp)<<endl;
	cout<<BottomUp(price,wt,n,capacity)<<endl;







	return 0;
}