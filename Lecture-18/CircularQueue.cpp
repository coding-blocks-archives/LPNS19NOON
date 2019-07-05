// CircularQueue
#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int n;
	int cs;
	int f;
	int e;
public:
	Queue(int s=5){
		arr = new int[s];
		cs = 0;
		f=0;
		n = s;
		e = n-1;
	}

	void push(int d){
		if(cs == n){
			cout<<"Queue Overflow"<<endl;
		}
		else{
			e = (e+1)%n;
			arr[e] = d;
			cs++;
		}
	}

	void pop(){
		if(cs == 0){
			cout<<"Queue Underflow"<<endl;
		}
		else{
			f = (f+1)%n;
			cs--;
		}
	}

	int front(){
		return arr[f];
	}

	bool empty(){
		return cs==0;
	}
};

int main(){
	Queue q;

	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	q.pop();








	return 0;
}