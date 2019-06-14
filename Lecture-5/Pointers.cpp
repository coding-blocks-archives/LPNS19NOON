// Pointers
#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *aptr = &a;

	float b = 10.11;
	float *bptr = &b; // bptr is a pointer to bucket b

	cout<<a<<endl;
	cout<<aptr<<endl;
	cout<<b<<endl;
	cout<<bptr<<endl;

	char ch = 'A';
	char *chptr = &ch;
	// int *chptr = (int *)&ch;

	cout<<ch<<endl;
	cout<<(int*)&ch<<endl;
	cout<<(int*)(&ch+1)<<endl;
	cout<<(int*)chptr<<endl;
	cout<<(int*)(chptr+1)<<endl;


	return 0;
}