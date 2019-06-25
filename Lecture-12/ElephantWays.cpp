// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int i,int j){
	// Base case
	if(i==0&& j==0){
		return 1;
	}

	// Recursive case
	int ans = 0;
	// Add all previous rows and cols
	for(int k=0;k<i;k++){
		ans += ElephantWays(k,j);
	}
	for(int k=0;k<j;k++){
		ans += ElephantWays(i,k);
	}
	return ans;
}

int main(){
	int i,j;
	cin>>i>>j;

	cout<<ElephantWays(i,j)<<endl;

	return 0; 
}