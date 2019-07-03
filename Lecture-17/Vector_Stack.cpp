// Vector_Stack
#include <iostream>
#include <vector>
using namespace std;

class Stack{
	vector<int> v;
public:

	void push(int d){
		v.push_back(d);
	}

	void pop(){
		v.pop_back();
	}

	bool empty(){
		return v.size() == 0;
	}

	int top(){
		return v[v.size()-1];
	}

};

int main(){
	Stack s;
	s.push(0);
	s.push(1);
	s.push(2);
	s.push(3);
	
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}	







	return 0; 
}