// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node * next;
	node(int d):data(d),next(NULL){}
};

void InsertAtFront(node* &head,int data){
	if(head==NULL){
		node* n = new node(data);
		head = n;
	}
	else{
		node* n = new node(data);
		n->next = head;
		head =n;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

int length(node* head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}

node* mid(node* head){
	if(head==NULL){
		return NULL;
	}
	node* slow = head;
	node* fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow = slow->next;
	}
	return slow;
}

node* merge(node* a,node* b){
	// Base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	// Recursive case
	node* c;
	if(a->data<b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;
}

node* MergeSort(node* head){
	// Base case
	if(head->next == NULL || head == NULL){
		return head;
	}
	// Recursive case
	// 1. Divide
	node* m = mid(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;
	// 2. Sort
	a = MergeSort(a);
	b = MergeSort(b);
	// 3. Merge
	node* newHead = merge(a,b);
	return newHead;
}

void BubbleSort(node* &head){
	int n1 = length(head);
	node* c;
	node* p;
	node* n;
	for(int i=0;i<=n1-2;i++){
		c = head;
		p = NULL;
		while(c && c->next){
			n = c->next;
			if(c->data>n->data){
				// Swapping hogi
				if(p==NULL){
					// Head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else{
					// Head change nahi hoga
					// n = c->next;
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else{
				// Swapping Nahi hogi
				p = c;
				c = c->next;
			}
		}
	}
}


int main(){

	node* head = NULL;
	node* head1 = NULL;
	InsertAtFront(head,18);
	InsertAtFront(head,100);
	InsertAtFront(head,10);
	InsertAtFront(head,20);
	InsertAtFront(head,6);
	InsertAtFront(head,0);
	InsertAtFront(head,5);
	InsertAtFront(head,2);
	InsertAtFront(head,1);

	Print(head);

	// InsertAtFront(head1,10);
	// InsertAtFront(head1,9);
	// InsertAtFront(head1,7);
	// InsertAtFront(head1,5);
	// InsertAtFront(head1,3);

	// Print(head1);
	// head = merge(head,head1);
	// head = MergeSort(head);
	BubbleSort(head);
	Print(head);







	return 0;
}