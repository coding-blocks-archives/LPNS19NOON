// MinStepsToOne
#include <iostream>
#include <climits>
using namespace std;

int Minsteps(int n){
	if(n==1){
		return 0;
	}
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1 = Minsteps(n-1) +1;
	if(n%3 == 0){
		op2 = Minsteps(n/3) + 1;
	}
	if(n%2==0){
		op3 = Minsteps(n/2) + 1;
	}
	return min(op1,min(op2,op3));

}

int topDown(int n,int *dp){
	if(n==1){
		dp[n] = 0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1 = topDown(n-1,dp) +1;
	if(n%3 == 0){
		op2 = topDown(n/3,dp) + 1;
	}
	if(n%2==0){
		op3 = topDown(n/2,dp) + 1;
	}
	dp[n] = min(op1,min(op2,op3));
	return dp[n];

}

int BottomUp(int n){
	int *dp = new int[n+1];
	dp[1] = 0;
	int op1,op2,op3;
	for(int i=2;i<=n;i++){
		op1=op2=op3 =INT_MAX;
		if(i%3==0){
			op1 = dp[i/3] + 1;
		}
		if(i%2==0){
			op2 = dp[i/2] + 1;
		}
		op3 = dp[i-1] + 1;
		dp[i] = min(op1,min(op2,op3));
	}
	return dp[n];
}



int main(){
	int n;
	cin>>n;
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i] = -1;
	}
	cout<<topDown(n,dp)<<endl;
	cout<<BottomUp(n)<<endl;
	cout<<Minsteps(n)<<endl;
	return 0;
}