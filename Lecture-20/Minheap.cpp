#include <iostream>
#include <vector>
using namespace std;

class Minheap{
	vector<int> v;

	void heapify(int i){
		int min_index = i;

		int left_child = 2*i;
		int right_child = left_child + 1; // or 2*i + 1;

		if(left_child<v.size() && v[min_index]>v[left_child]){
			min_index = left_child;
		}
		if(right_child<v.size() && v[min_index]>v[right_child]){
			min_index = right_child;
		}
		if(min_index!=i){
			swap(v[min_index],v[i]);
			heapify(min_index);
		}
	}

public:
	Minheap(){
		v.push_back(-1);
	}

	void push(int d){
		v.push_back(d);

		int children = v.size()-1;
		int parent = children/2;

		while(children>1 && v[children]<v[parent]){
			swap(v[children],v[parent]);
			children = parent;
			parent = parent/2;
		}
	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();

		heapify(1);
	}

	int top(){
		return v[1];
	}

	bool empty(){
		return v.size() == 1;
	}

};

int main(){
	Minheap h;

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