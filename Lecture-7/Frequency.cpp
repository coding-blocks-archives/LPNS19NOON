// Frequency
#include <iostream>
using namespace std;

int main(){
	char in[100];
	cin>>in;

	int freq[26]={0};

	for(int i=0;in[i]!='\0';i++){
		char ch = in[i];
		int index = ch - 'a';
		freq[index]++;
	}
	for(int i = 0;i<26;i++){
		cout<<freq[i]<<" ";
	}
	cout<<endl;
	

	return 0;
}