#include <iostream>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};

void PreOrder(node* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if(root==NULL){
		return;
	}
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}

void PostOrder(node* root){
	if(root ==NULL){
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

void LevelOrderPrint(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp == NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

node* InsertInBST(node* root,int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(data<=root->data){
		root->left = InsertInBST(root->left,data);
	}
	else{
		root->right = InsertInBST(root->right,data);
	}
	return root;
}


node* BuildTree(){
	node* root = NULL;

	int data;
	cin>>data;
	while(data!=-1){
		root = InsertInBST(root,data);
		cin>>data;
	}
	return root;
}

bool isBST(node* root,int min=INT_MIN,int max = INT_MAX){
	// Base case
	if(root == NULL){
		return true;
	}

	// Recursive case
	if(root->data<=max && root->data>=min && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	Pair p;
	// Base case
	if(root == NULL){
		p.height = 0;
		p.balanced = true;
		return p;
	}
	// Recursive case
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height,right.height)+1;

	if(left.balanced && right.balanced && abs(left.height-right.height)<=1){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}
	return p;
}

node* ArrayToBst(int *arr,int s,int e){
	// Base case
	if(s>e){
		return NULL;
	}
	// Recursive case
	int mid=(s+e)/2;
	node *root = new node(arr[mid]);
	root->left = ArrayToBst(arr,s,mid-1);
	root->right = ArrayToBst(arr,mid+1,e);
	return root;
}

class LinkedList{
public:
	node* head;
	node* tail;
};

LinkedList BstToLL(node* root){
	LinkedList l;
	// Base case
	if(root == NULL){
		l.head=l.tail=NULL;
		return l;
	}
	// Recursive case
	if(root->left!=NULL && root->right==NULL){
		LinkedList left = BstToLL(root->left);
		left.tail->right = root;
		l.head =left.head;
		l.tail =root;
		return l;
	}
	else if(root->left == NULL && root->right!=NULL){
		LinkedList right = BstToLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else if(root->left==NULL && root->right == NULL){
		l.head = l.tail = root;
		return l;
	}
	else{
		LinkedList left = BstToLL(root->left);
		LinkedList right = BstToLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->right;
	}
	cout<<endl;
}


int main(){
	// node* root = BuildTree();
	int arr[]={1,3,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(int);
	node* root = ArrayToBst(arr,0,n-1);
	// if(isBST(root)){
	// 	cout<<"BST"<<endl;
	// }
	// Pair p = isBalanced(root);
	// if(p.balanced){
	// 	cout<<"Balanced"<<endl;
	// }
	// else{
	// 	cout<<"Not Balanced"<<endl;
	// }
	// cout<<"Height : "<<p.height<<endl;
	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	LevelOrderPrint(root);	
	LinkedList l = BstToLL(root);
	Print(l.head);


	return 0;
}





