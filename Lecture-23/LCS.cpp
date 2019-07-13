// LCS
#include <iostream>
using namespace std;
int LCS(char *a,char *b){
	int dp[100][100]={0};
	
	for(int i=1;i<=strlen(a);i++){
		for(int j=1;j<=strlen(b);j++){
			if(a[i-1]==b[j-1]){
				dp[i][j] = 1+ dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<=strlen(a);i++){
		for(int j=0;j<=strlen(b);j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return dp[strlen(a)][strlen(b)];
}

int main(){
	char a[]="abdef";
	char b[]="bef";

	cout<<LCS(a,b)<<endl;







	return 0;
}