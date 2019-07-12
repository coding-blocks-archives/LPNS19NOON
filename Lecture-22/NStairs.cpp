// NStairs
#include <iostream>
using namespace std;

int NStairs(int n,int k){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recursive case
	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += NStairs(n-i,k);
	}
	return ans;
}

int BottomUp(int n,int k){
	int *dp = new int[n+1];
	dp[0] = 1;
	int ans =0;
	for(int i=1;i<=n;i++){
		ans = 0;
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				ans += dp[i-j];
			}
		}
		dp[i] = ans;
	}
	return dp[n];
}

int Stairs(int n,int k){
	int* dp = new int[n+1];

	dp[0] = dp[1] = 1;

	for(int i=2;i<=n;i++){
		if(i-k-1>=0){
			dp[i] = 2*dp[i-1]-dp[i-k-1];
		}
		else{
			dp[i] = 2*dp[i-1];
		}
	}
	return dp[n];
}

int main(){
	int n,k=3;
	cin>>n;
	cout<<BottomUp(n,k)<<endl;
	cout<<Stairs(n,k)<<endl;
	cout<<NStairs(n,k)<<endl;

	return 0;
}