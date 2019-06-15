#include <iostream>
using namespace std;

void ReadString(char* a,char delimit='\n'){
	int i = 0;
	char ch;
	ch = cin.get();
	while(ch!=delimit){
		a[i] = ch;
		i++;

		ch = cin.get();
	}
	a[i] = '\0';
	return;
}
	
int length(char *a){
	int i;
	for(i = 0; a[i]!='\0';i++){

	}
	return i;
}



int main(){
	char a[100];

	// cin>>a;
	ReadString(a,'@');
	// cin.getline(a,10);

	cout<<a<<endl;
	cout<<length(a)<<endl;
	

	return 0;
}