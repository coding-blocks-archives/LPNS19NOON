// Inbuilt_Heap
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Comparator{
public:
	// Functor
	bool operator()(int a,int b){
		return a>b;
	}
};

int main(){
	// priority_queue<int> h; // Max heap
	// Minheap
	priority_queue<int,vector<int>,Comparator> h; // Min heap

	h.push(10);
	h.push(1);
	h.push(0);
	h.push(20);
	h.push(15);
	h.push(-15);
	h.push(-1);
	h.push(-11);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}


	return 0;
}