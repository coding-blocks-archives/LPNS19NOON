// CelAndFar
#include <iostream>
using namespace std;

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;

	int fstart = init;
	while(fstart<=fval){
		int cel = 5*(fstart-32)/9;
		cout<<fstart<<" "<<cel<<endl;

		fstart = fstart + step;
	}


	return 0;
}