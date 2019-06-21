// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char *out,int j){
	// Base case
	if(in[i]=='\0'){
		 out[j]='\0';
		 cout<<out<<endl;
		 return;
	}
	// Recursive case
	// Ek baari ith index wale element ko ignore krdo
	Subsequences(in,i+1,out,j);

	// Ek baari ith ko consider krlo
	out[j]=in[i];
	Subsequences(in,i+1,out,j+1);

}

int main(){
	char in[]="abc";	
	char out[100];

	Subsequences(in,0,out,0);

	return 0; 
}