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

void Print(priority_queue<int,vector<int>,Comparator> h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
}

int main(){
	// priority_queue<int> h; // Max heap
	// Minheap
	priority_queue<int,vector<int>,Comparator> h; // Min heap

	int k = 3;
	int number;
	int count = 1;
	while(1){
		cin>>number;
		if(number == -1){
			Print(h);
		}
		else if(count<=k){
			h.push(number);
			count++;
		}
		else{
			if(h.top()<number){
				h.pop();
				h.push(number);
			}
		}
	}



	return 0;
}