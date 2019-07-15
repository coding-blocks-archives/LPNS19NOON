#include <iostream>
#include <list>
using namespace std;

class Graph{
	list<int>* adjList;
	int v;
public:

	Graph(int s){
		v = s;
		adjList = new list<int>[v];
	}

	void addEdge(int u,int v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void Print(){
		for(int i=0;i<v;i++){
			cout<<i<<"-->";
			for(auto neighbours:adjList[i]){
				cout<<neighbours<<",";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(0,2);
	g.addEdge(0,3);

	g.Print();





	return 0;
}