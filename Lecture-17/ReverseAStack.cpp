// ReverseAStack
#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s,int topElement){
	if(s.empty()){
		s.push(topElement);
		return;
	}
	int top=s.top();
	s.pop();
	pushBottom(s,topElement);
	s.push(top);
}
void ReverseAStack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int topElement = s.top();
	s.pop();
	ReverseAStack(s);
	pushBottom(s,topElement);
}

void Print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}


int main(){
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	Print(s);
	ReverseAStack(s);
	Print(s);



	return 0; 
}