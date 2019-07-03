#include <iostream>
#include "Stack.h"
using namespace std;


int main(){
	Stack<int> s;

	// s.push(0);
	// s.push(1);
	// s.push(2);
	// s.push(3);
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0; 
}