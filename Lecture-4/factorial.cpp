// factorial
#include <iostream>
using namespace std;

int fact(int n){
	int ans = 1;

	for(int i=1;i<=n;i++){
		ans = ans * i;
	}
	return ans;
}

int nCr(int n,int r){
	int ans = fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;

	return 0;
}