// BinaryTree
#include <iostream>
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


int CountNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return CountNodes(root->left)+CountNodes(root->right)+1;
}

int Height(node* root){
	if(root == NULL){
		return 0;
	}

	int left = Height(root->left);
	int right = Height(root->right);
	return max(left,right)+1;
}

int main(){
	node* root = NULL;
	root = CreateTree();

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	cout<<"Nodes : "<<CountNodes(root)<<endl;
	cout<<"Height :"<<Height(root)<<endl;




	return 0;
}