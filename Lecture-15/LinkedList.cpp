// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d):next(NULL){
		data=d;
	}
};

void InsertAtFront(node* &head,node* &tail,int data){
	if(head==NULL){
		node* n=new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head==NULL){
		node* n=new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}	
}

int length(node* head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}


void InsertAtMid(node* &head,node* &tail,int pos,int data){
	if(pos==0){
		InsertAtFront(head,tail,data);
	}
	else if(pos>=length(head)){
		InsertAtEnd(head,tail,data);

	}
	else{
		int jump = 1;
		node* temp = head;
		while(jump<=pos-1){
			temp=temp->next;
			jump++;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

void DeleteAtFront(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void DeleteAtEnd(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		while(temp->next!=tail){
			temp=temp->next;
		}

		temp->next = NULL;
		delete tail;
		tail = temp;
	}	
}

void DeleteAtMid(node* &head,node* &tail,int pos){
	if(pos == 0){
		DeleteAtFront(head,tail);
	}
	else if(pos>=length(head)){
		return;
	}
	else if(pos==length(head)-1){
		DeleteAtEnd(head,tail);
	}
	else{
		int jump = 1;
		node* temp = head;
		while(jump<=pos-1){
			temp = temp->next;
			jump++;
		}
		node* temp1 = temp->next;
		temp->next = temp->next->next;
		delete temp1;
	}

}

node* SearchLL(node* head,int key){

	while(head){
		if(head->data == key){
			return head;
		}
		head = head->next;
	}

	return NULL;
}

node* SearchLLRec(node* head,int key){
	// Base case
	if(head==NULL){
		return NULL;
	}
	// Recursive case
	if(head->data == key){
		return head;
	}
	// node* chotiListKaAns = SearchLLRec(head->next,key);
	return SearchLLRec(head->next,key);
}

int main(){
	node* head=NULL;
	node* tail=NULL;

	InsertAtFront(head,tail,0);
	InsertAtFront(head,tail,1);
	InsertAtFront(head,tail,2);
	InsertAtFront(head,tail,3);
	InsertAtEnd(head,tail,4);
	InsertAtEnd(head,tail,5);
	InsertAtMid(head,tail,100,100);

	Print(head);
	// DeleteAtFront(head,tail);
	// DeleteAtFront(head,tail);
	DeleteAtMid(head,tail,6);
	// Print(head);
	// DeleteAtEnd(head,tail);
	Print(head);
	node* ans = SearchLLRec(head,3);
	if(ans!=NULL){
		cout<<"Found : " <<ans->data<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}






	cout<<length(head)<<endl;

	return 0; 
}