// CostMatrix
#include <iostream>
using namespace std;

// int MinCost(int cost[][4],int i,int j){
// 	if(i == 0 && j==0){
// 		return cost[i][j];
// 	}
// 	else if(i==0 && j>0){
// 		dp[i][j] =MinCost(cost,i,j-1)+cost[i][j]
// 		return dp[i][j];
// 	}
// 	else if(i>0 && j==0){
// 		return MinCost(cost,i-1,j)+cost[i][j];
// 	}
// 	else{
// 		return min(MinCost(cost,i-1,j),MinCost(cost,i,j-1))+cost[i][j];
// 	}

// }

int BottomUp(int cost[][4],int rows,int cols){
	int dp[100][100]= {0};

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==0 && j==0){
				dp[i][j] = cost[i][j];
			}
			else if(i==0 && j>0){
				dp[i][j] = cost[i][j] + dp[i][j-1];
			}
			else if(i>0 && j==0){
				dp[i][j] = cost[i][j] + dp[i-1][j];
			}
			else{
				dp[i][j] = cost[i][j] + min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[rows-1][cols-1];
}


int main(){
	int cost[4][4]={
		{1,1,1,8},
		{2,10,1,9},
		{3,5,1,1},
		{3,6,1,2}
	};

	cout<<BottomUp(cost,4,4)<<endl;

	return 0;
}
