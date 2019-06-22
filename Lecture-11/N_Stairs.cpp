// N_Stairs
#include <iostream>
using namespace std;

int N_Stairs(int n,int k=3){
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}

	// return N_Stairs(n-1)+N_Stairs(n-2)+N_Stairs(n-3);
	int ans = 0;
	for(int j=1;j<=k;j++){
		ans += N_Stairs(n-j);
	}
	return ans;
}


int main(){
	int n;
	cin>>n;

	cout<<N_Stairs(n)<<endl;









	return 0; 
}