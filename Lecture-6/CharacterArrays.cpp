#include <iostream>
using namespace std;

int main(){
	char b[11] = "HelloWorld";
	cout<<b<<endl;



	char a[]={'A','B','C','D','\0'};
	int n = sizeof(a);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<a<<endl;
	

	return 0;
}