// Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;

	for(int i=0;i<4;i++){
		v.push_back(i);
	}
	v.push_back(4);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;





	return 0; 
}