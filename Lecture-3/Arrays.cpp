// Arrays
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int a[]={1,2,3,400,50};
	int MAX = INT_MIN;
	// int n;
	// cout<<"Enter n :";
	// cin>>n;
	// // User input
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }

	for(int i=0;i<5;i++){
		if(a[i]>MAX){
			MAX = a[i];
		}
	}
	cout<<MAX<<endl;






	return 0;
}