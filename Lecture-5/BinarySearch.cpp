// BinarySearch
#include <iostream>
using namespace std;

int main(){
	int a[]={1,3,4,5,6,7,8};
	int n= sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	int s = 0;
	int e = n-1;
	int key;
	cin>>key;

	while(s<=e){
		// find mid
		int mid = (s+e)/2;
		// compare the a[mid] with key
		if(a[mid] == key){
			cout<<"Element found at index : "<<mid<<endl;
			break;
		}
		else if(a[mid]<key){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}

	if(s>e){
		cout<<"Element not found "<<endl;
	}



	return 0;
}