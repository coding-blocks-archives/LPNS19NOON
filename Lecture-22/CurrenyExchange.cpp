// MinCoins
#include <iostream>
using namespace std;
int MinCoins(int *coins,int n,int amount,int *dp){
	if(amount == 0){
		dp[amount] = 0;
		return 0;
	}
	if(dp[amount]!=-1){
		return dp[amount];
	}
	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		
		if(amount>=coins[i]){
			int smallerans = MinCoins(coins,n,amount-coins[i],dp);
			if(smallerans!=INT_MAX){
				ans = min(smallerans+1,ans);
			}
		}
	}
	dp[amount] = ans;
	return ans;
}

int BottomUp(int* coins,int n,int amount){
		int* dp = new int[amount+1];

		for(int i=0;i<=amount;i++){
			dp[i] = INT_MAX;
		}
		dp[0] = 0;

		for(int rupay=1;rupay<=amount;rupay++){
			int ans = INT_MAX;
			for(int i=0;i<n;i++){ // iteration on coins
				if(rupay>=coins[i]){
					if(dp[rupay-coins[i]]!=INT_MAX){
						dp[rupay] = min(dp[rupay-coins[i]]+1,dp[rupay]);
					}
				}
			}
		}
		return dp[amount];
}

int main(){
	int n;
	int coins[]={1,7,10};
	n = 3;
	int amount;
	cin>>amount;

	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i] = -1;
	}
	cout<<BottomUp(coins,n,amount)<<endl;
	cout<<MinCoins(coins,n,amount,dp)<<endl;
	return 0;
}
