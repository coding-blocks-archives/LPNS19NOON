// BreakAndContinue
#include <iostream>
using namespace std;

int main(){
	int i=0;
	while(i<=10){
		if(i==5){
			i++;
			continue;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<endl;


	return 0;
}