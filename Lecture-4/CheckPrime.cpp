// 
#include <iostream>
using namespace std;

bool CheckPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void PrintPrime(int n){
	for(int i=2;i<=n;i++){
		if(CheckPrime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return;

}

int main(){
	int n;
	cin>>n;
	bool ans = CheckPrime(n);

	if(ans){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}

	PrintPrime(n);



	return 0;
}