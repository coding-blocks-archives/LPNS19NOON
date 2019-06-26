// Vector
#include <iostream>
using namespace std;

class Vector{
public:
	int *arr;
	int ms;
	int cs;
	
	Vector(int s=2){
		cs = 0;
		ms = s;
		arr = new int[ms];
	}

	void push_back(int data){
		if(cs==ms){
			int* oldarr = arr;
			int oldms = ms;
			arr = new int[2*ms];
			ms = 2*ms;
			for(int i=0;i<oldms;i++){
				arr[i] = oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs] = data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	bool empty(){
		return cs == 0;
	}

	int operator[](int i){
		return arr[i]; // arr[i] == *(arr + i)
	}
};


int main(){
	Vector v;

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