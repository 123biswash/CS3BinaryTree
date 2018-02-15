// Implement a BST (Binary Search Tree) Data Structure in C++. Also implement Insertion into a BST and Inorder Traversal.
// You will not be required to implement Deletion into a BST and any other Tree Traversals in this Lab.


#include<iostream>
using namespace std;


struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};

class Tree{
	
	public:
	//int count = 0;
	BstNode* Root(){ return root;};
	Tree();
	
	void Insert(int);
	//BstNode* GetNewNode(int data);
	
	void treeInOrder();

	private: 
	BstNode* root;
	void InOrder(BstNode*&);
	void insertWhenRootNotNull(BstNode*&, int);
};

Tree::Tree(){
	root= NULL;

}



// BstNode* Tree::GetNewNode(int data){
// 	BstNode* newNode = new BstNode();
// 	newNode->data = data;
// 	newNode->left = NULL;
// 	newNode->right = NULL;
// 	return newNode;
// }

void Tree::Insert(int data){
	if (root == NULL){
		root = new BstNode;
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}else{
		insertWhenRootNotNull(root, data);
	}
	
}

void Tree::insertWhenRootNotNull(BstNode*& currNode, int item){
	if (currNode == NULL){
		currNode = new BstNode;
		currNode->data = item;
		currNode->left = NULL;
		currNode->right = NULL;

	}else if (item < currNode->data){
		insertWhenRootNotNull(currNode->left, item);
	}else if(item > currNode->data){
		insertWhenRootNotNull(currNode->right, item);
	}	
	
}

void Tree::treeInOrder(){
	InOrder(root);
}

void Tree::InOrder(BstNode*& currNode){
	if (currNode==NULL){ 
		return;
	}
	InOrder(currNode->left);
	cout<<(currNode->data)<<" ";
	InOrder(currNode->right);
}

int main(){
	Tree x;
	x.Insert(15);
	x.Insert(10);
	x.Insert(20);
	x.Insert(5);
	x.Insert(25);
	x.treeInOrder();
	//cout << (x->getLeafCount());
	return 0;
}

