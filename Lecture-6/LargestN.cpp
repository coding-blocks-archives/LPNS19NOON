// LargestN
#include <iostream>
using namespace std;
int length(char *a){
	int i;
	for(i = 0; a[i]!='\0';i++){

	}
	return i;
}

void Copy(char* a,char *b){

	for(int i=0;i<=length(b);i++){
		a[i] = b[i];
	}
}

int main(){
	
	int n;
	char max_string[100];
	int max_size = 0;

	cin>>n;
	cin.ignore();
	char in[100];
	for(int i=0;i<n;i++){
		cin.getline(in,100);
		int l = length(in);
		if(l>max_size){
			Copy(max_string,in);
			max_size = l;
		}
	}

	cout<<"Max String "<<max_string<<endl;










	return 0;
}
