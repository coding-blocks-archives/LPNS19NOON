// Fibo
#include <iostream>
using namespace std;
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int Fibo(int n,int* dp){
	if(n==0||n==1){
		dp[n] = n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans = Fibo(n-1,dp)+Fibo(n-2,dp);
	dp[n] = ans;
	return dp[n];
}

int BottomUp(int n){
	int* dp = new int[n+1];

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	// for(int i=0;i<=n;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	int ans = dp[n];
	delete []dp;
	return ans;
}

int main(){
	int n;
	cin>>n;
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i] = -1;
	}

	cout<<Fibo(n,dp)<<endl;
	cout<<BottomUp(n)<<endl;
	cout<<fib(n)<<endl;

	return 0;
}