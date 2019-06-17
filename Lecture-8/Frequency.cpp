// Frequency
#include <iostream>
using namespace std;

int main(){
	char in[100];
	cin>>in;
	char in2[100];
	cin>>in2;
	int freq[26]={0};

	for(int i=0;in[i]!='\0';i++){
		char ch = in[i];
		int index = ch - 'a';
		freq[index]++;
	}
	for(int i=0;in2[i]!='\0';i++){
		char ch = in2[i];
		int index = ch - 'a';
		freq[index]--;
	}	
	int i;
	for(i = 0;i<26;i++){
		if(freq[i]!=0){
			cout<<"Not a Permutation"<<endl;
			break;
		}
	}
	if(i==26){
		cout<<"Permutation"<<endl;
	}
	cout<<endl;
	

	return 0;
}