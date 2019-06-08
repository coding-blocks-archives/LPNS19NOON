// PrintPrimes
#include <iostream>
using namespace std;

int main(){
	int n,i,number=2;
	cin>>n;

	while(number<=n){
		i=2;
		while(i<number){
			if(number%i==0){
				break;
			}
			i++;
		}
		if(i==number){
			cout<<number<<" ";
		}
		number++;
	}
	cout<<endl;

















	// int i = 2;

	// while(i<n){
	// 	if(n%i==0){
	// 		cout<<"Not Prime"<<endl;
	// 		break;
	// 	}
	// 	i++;
	// }
	// if(i==n){
	// 	cout<<"Prime"<<endl;
	// }

	// cout<<"Welcome"<<endl;
 
	return 0;
}