// Generic_AdjList
#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <list>
#include <climits>
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

	void BFS(T src){
		queue<T> q;
		unordered_map<T,bool> visited;

		visited[src] = true;
		q.push(src);

		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto neighbours:adjList[node]){
				if(!visited[neighbours]){
					visited[neighbours] = true;
					q.push(neighbours);
				}
			}
		}
	}

	int SSSP(T src,T des){
		queue<T> q;
		unordered_map<T,T> parent_map;
		unordered_map<T,int> dist;

		for(auto node:adjList){
			dist[node.first]=INT_MAX;
		}
		dist[src] = 0;
		parent_map[src] = src;
		q.push(src);
		while(!q.empty()){
			T node = q.front();
			int parent_distance = dist[node];
			q.pop();
			for(auto children:adjList[node]){
				if(dist[children]==INT_MAX){
					dist[children] = parent_distance + 1;
					q.push(children);
					parent_map[children] = node;
				}
			}

		}
		// for(auto node:dist){
		// 	cout<<"Distance of "<<node.first<<" from "<<src<<" is "<<node.second<<endl;
		// }

		T temp = des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp = parent_map[temp];
		}
		cout<<src<<endl;

		return dist[des];
	}
};



int main(){
	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for(int u=0;u<=36;u++){
		for(int dice = 1;dice<=6;dice++){
			int v = u+dice+board[u+dice];
			g.addEdge(u,v,false);
		}
	}


	// g.addEdge(0,1);
	// g.addEdge(2,1);
	// g.addEdge(2,4);
	// g.addEdge(2,3);
	// g.addEdge(4,3);
	// g.addEdge(5,3);
	// g.addEdge(0,4);


	// g.BFS(0);
	cout<<g.SSSP(0,36)<<endl;

	// g.addEdge("Putin","Trump",false);
	// g.addEdge("Putin","Modi",false);
	// g.addEdge("Trump","Modi",true);
	// g.addEdge("Yogi","Modi",true);
	// g.addEdge("Yogi","Prabhu",false);
	// g.addEdge("Prabhu","Modi",false);
	// g.addEdge("Putin","Pope",false);
	// g.Print();

	return 0;
}