// Pallindrome
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i = 0; a[i]!='\0';i++){

	}
	return i;
}

bool isPallindrome(char *a){
	int i = 0;
	int j = length(a)-1;

	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}	
	return true;
}

int main(){
	char a[100];
	cin>>a;

	if(isPallindrome(a)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}



	

	return 0;
}