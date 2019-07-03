#include <iostream>
// #include "Stack.h"
using namespace std;
template<typename T>
class node{
public:
	T data;
	node<T>* next;
	node(T d):data(d),next(NULL){}
};

template<typename T>
class Stack{
	node<T>* head;
public:
	Stack(){
		head = NULL;
	}

	void push(T d){
		if(head == NULL){
			head = new node<T>(d);
		}
		else{
			node<T>* n = new node<T>(d);
			n->next = head;
			head =n;
		}
	}

	void pop(){
		if(head!=NULL){
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty(){
		return head == NULL;
	}

	T top(){
		return head->data;
	}

};

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