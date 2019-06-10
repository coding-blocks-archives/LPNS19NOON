// UniqueNumber1
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int ans = 0;
	for(int i=0;i<n;i++){
		int number;
		cin>>number;

		ans = ans ^ number;
	}
	cout<<ans<<endl;


	return 0;
}