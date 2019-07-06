// BinaryTree
#include <iostream>
#include <queue>
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

node* CreateTree(){
	int data;
	cin>>data;
	if(data == -1){
		return NULL;
	}
	node* root = new node(data);
	root->left = CreateTree();
	root->right = CreateTree();
	return root;
}// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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

void Mirror(node* root){
	// Base case
	if(root == NULL){
		return;
	}
	// Recursive case
	swap(root->left,root->right);
	Mirror(root->left);
	Mirror(root->right);
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

node* LevelOrderInput(){
	node* root = NULL;
	int data;	
	queue<node*> q;

	cout<<"Enter root node data : ";
	cin>>data;
	root = new node(data);
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		cout<<"Enter children of "<<temp->data<<" ";
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			temp->left = new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right = new node(c2);
			q.push(temp->right);
		}
	}
	return root;
}

int pre[]={8,10,1,6,4,7,3,14,13};
int i=0;

node* BuildTree(int *in,int s,int e){
	if(s>e){
		return NULL;
	}
	int data = pre[i];
	node* root = new node(data);
	i++;
	int k =-1;
	for(int j=s;j<=e;j++){
		if(in[j] == data){
			k=j;
			break;
		}
	}
	root->left = BuildTree(in,s,k-1);
	root->right = BuildTree(in,k+1,e);
	return root;
}

int main(){
	node* root = NULL;
	int in[]={1,10,4,6,7,8,3,13,14};
	int n = sizeof(in)/sizeof(int);
	root = BuildTree(in,0,n-1);
	// cout<<"Enter Level order"<<endl;
	// // root = CreateTree();
	// root = LevelOrderInput();

	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	LevelOrderPrint(root);
	Mirror(root);
	LevelOrderPrint(root);
	cout<<endl;




	return 0;
}