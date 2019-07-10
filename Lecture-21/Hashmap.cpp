// Hashmap
#include <iostream>
using namespace std;
// -------------------- NODE --------------------------
template<typename T>
class node{
public:
	string key;
	T value;
	node<T>* next;
	node(string k,T v){
		key = k;
		value = v;
		next = NULL;
	}
};
// --------------------------------------------------




template<typename T>
class hashmap{
	node<T>** Bucket;
	int cs;
	int ts;

	int hashFn(string key){
		int ans = 0;
		int mul = 1;

		for(int i=0;key[i]!='\0';i++){
			ans += key[i]*mul;
			mul*=37;
			ans%= ts;
			mul%=ts;
		}
		return ans%ts;

	}

	void rehash(){
		node<T>** oldBucket = Bucket;
		int oldts = ts;

		Bucket = new node<T>*[2*ts];
		ts = 2*ts;
		cs = 0;
		for(int i=0;i<ts;i++){
			Bucket[i] = NULL;
		}

		for(int i=0;i<oldts;i++){
			node<T>* temp = oldBucket[i];
			while(temp){
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			delete oldBucket[i];
		}
		delete []oldBucket;
	}

public:
	hashmap(int s=7){
		cs = 0;
		ts = s;
		Bucket = new node<T>*[ts]; 

		for(int i=0;i<ts;i++){
			Bucket[i] = NULL;
		}
	}

	void insert(string key,T value){
		int i = hashFn(key);

		node<T>* n = new node<T>(key,value);
		n->next = Bucket[i];
		Bucket[i] = n;
		cs++;
		float load_factor = cs/(1.0*ts);
		if(load_factor>0.7){
			rehash();
		}

	}

	// void remove(){}
	void Print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"-->";
			node<T>* temp = Bucket[i];
			while(temp){
				cout<<temp->key<<",";
				temp= temp->next;
			}
			cout<<endl;
		}
	}

	T* search(string key){
		int i = hashFn(key);
		node<T>* temp = Bucket[i];
		while(temp){
			if(temp->key == key){
				return &(temp->value);
			}
		}
		return NULL;
	}

	T& operator[](string key){
		
		T* temp = search(key);
		if(temp == NULL){
			T garbage;
			insert(key,garbage);
			temp = search(key);
			return *temp;
		}
		else{
			return *temp;
		}
	}

};


int main(){
	hashmap<int> h;

	h.insert("Mango",100);
	h.insert("Apple",200);
	h.insert("Pineapple",20);
	h.insert("Guava",50);
	h.insert("Kiwi",70);
	h["Kiwi"]=150;
	h["Banana"] = 60;
	h.Print();
	cout<<h["Banana"]<<endl;
	cout<<h["Kiwi"]<<endl;









	return 0;
}