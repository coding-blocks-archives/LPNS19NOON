// Hashmap
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){

	map<string,int> h;
	pair<string,int> p("Mango",100);
	cout<<p.first<<endl;
	cout<<p.second<<endl;

	h.insert(p);

	h.insert(make_pair("Apple",150));
	h.insert(make_pair("PineApple",30));
	h.insert(make_pair("Guava",60));
	h["Kiwi"] = 50; // Insertion
	h["Mango"] = 200;
	cout<<h["Mango"]<<endl;

	if(h.count("Mango")){
		 cout<<"Yes"<<endl;
	}
	if(h.count("apple")==0){
		cout<<"No"<<endl;
	}

	// for each loop
	for(auto node:h){
		cout<<node.first<<"-->"<<node.second<<endl;

	}


	auto a = 10.11;
	cout<<a<<endl;






	return 0;
}