// STL
#include <iostream>
#include <cstring>
using namespace std;
int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){
	char a[100]="Hello World";
	char b[100]="Coding Blocks";

	cout<<length(a)<<endl;
	cout<<strlen(a)<<endl;
	cout<<a<<endl;
	cout<<b<<endl;

	strcpy(b,a);
	// cout<<a<<endl;
	// cout<<b<<endl;

	strcat(a,b);
	cout<<a<<endl;
	cout<<b<<endl;


	

	return 0;
}