// Generic_AdjList
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > adjList;
public:
	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void Print(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){ // or adjList[node.first] = node.second
				cout<<neighbours<<",";
			}
			cout<<endl;
		}
	}
};



int main(){
	Graph<string> g;

	g.addEdge("Putin","Trump",false);
	g.addEdge("Putin","Modi",false);
	g.addEdge("Trump","Modi",true);
	g.addEdge("Yogi","Modi",true);
	g.addEdge("Yogi","Prabhu",false);
	g.addEdge("Prabhu","Modi",false);
	g.addEdge("Putin","Pope",false);
	g.Print();

	return 0;
}