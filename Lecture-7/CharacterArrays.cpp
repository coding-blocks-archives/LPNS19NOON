#include <iostream>
using namespace std;

int main(){
	char a[]={'A','B','C','D'};
	int n = sizeof(a);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	

	return 0;
}