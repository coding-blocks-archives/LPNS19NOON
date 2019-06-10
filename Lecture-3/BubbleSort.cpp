// BubbleSort
#include <iostream>
using namespace std;

int main(){
	int a[]={5,4,3,2,1,-1,-3,-2};
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}