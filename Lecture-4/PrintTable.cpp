// PrintTable
#include <iostream>
using namespace std;

void PrintTable(int init,int fval,int step){
	int fstart = init;
	while(fstart<=fval){
		int cel = 5*(fstart-32)/9;
		cout<<fstart<<" "<<cel<<endl;

		fstart = fstart + step;
	}	
}

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;

	PrintTable(init,fval,step);



	return 0;
}