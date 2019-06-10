// CountAllCharacters
#include <iostream>
using namespace std;

int main(){
	int spaces = 0;
	int characters = 0;
	int special = 0;
	int digits = 0;

	char ch;

	ch = cin.get();

	while(ch!='$'){
		// Code
		if((ch>='A' && ch<='Z' )||(ch>='a' && ch<='z')){
			characters++;
		}
		else if(ch>='0' && ch<='9'){
			digits++;
		}
		else if(ch==' '||ch=='\n'||ch=='\t'){
			spaces++;
		}
		else{
			special++;
		}
		ch = cin.get();
	}

	cout<<"Alphabets : "<<characters<<endl;
	cout<<"Digits : "<<digits<<endl;
	cout<<"Whitespace : "<<spaces<<endl;
	cout<<"Special : "<<special<<endl;






	return 0;
}