// AppendAB
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i = 0; a[i]!='\0';i++){

	}
	return i;
}


int main(){
	char a[100];
	char b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	int i = length(a);
	int j = 0;

	while(j<=length(b)){
		a[i]=b[j];
		i++;
		j++;
	}
	cout<<a<<endl;

	return 0;
}