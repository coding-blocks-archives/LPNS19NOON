// SearchString
#include <iostream>
using namespace std;
bool Compare(char *a,char *b){
	int i=0,j=0;

	while(a[i]!='\0' && b[j]!='\0'){
		if(a[i]!=b[j]){
			return false;
		}
		i++;
		j++;
	}

	if(a[i]=='\0' && b[j]=='\0'){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	char a[][100]={
		"Hello World",
		"Coding Blocks",
		"Coding",
		"Aaroh"
	};
	char key[100];
	cin.getline(key,100);
	int i;
	for(i=0;i<4;i++){
		// Compare a[i] with key
		if(Compare(a[i],key)==true){
			cout<<"Found"<<endl;
			break;
		}
	}
	if(i==4){
		cout<<"Not Found"<<endl;
	}

	// cout<<key<<endl;
	// for(int i=0;key[i]!='\0';i++){
	// 	cout<<key[i]<<" ";
	// }
	cout<<endl;






	

	return 0;
}