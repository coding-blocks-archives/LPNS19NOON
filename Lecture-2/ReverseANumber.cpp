// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	int ans = 0;
	int n;
	cin>>n;

	for(int number = n ; number!=0 ; number=number/10){
		ans = ans*10 + number%10;
	}
	cout<<ans<<endl;
	


	return 0;
}