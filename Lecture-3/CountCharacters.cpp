// CountCharacters
#include <iostream>
using namespace std;

int main(){
	char ch;
	int count =0;
	
	// cin>>ch;
	ch = cin.get();

	while(ch!='$'){
		count++;

		// cin>>ch;
		ch=cin.get();
	}
	cout<<"Count : "<<count<<endl;

	return 0;
}