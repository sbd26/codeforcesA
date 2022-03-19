/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


struct BstNode{
	
		int data;
		BstNode* left;
		BstNode* right;
};

BstNode* GetNewNode(int data){
	BstNode* newnode = new BstNode;
	newnode -> data = data;
	newnode -> left = newnode -> right = NULL;
	return newnode;
}


BstNode* Insert(BstNode* root , int data)
{
		if (root == NULL){
			root = GetNewNode(data);
			return root;
		}
		else if ( data <= root->data)
			root -> left = Insert(root->left,data);
		else
			root -> right = Insert(root->right,data);
			
		return root;	
	
}


void preorder(BstNode* node){
		cout << node -> data << " ";
		if ( node -> left != NULL)
			preorder (node -> left);
		if (node -> right != NULL) 
			preorder(node ->right);
	
	
}


struct nodee{
		int data;
		nodee* next;
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	BstNode *root = NULL;
	int tt = 1;
	while (tt)
	{
		 cin >> tt;
		root = Insert(root,tt);
	}
	
	
	
	preorder(root);
	
 
	
	return 0;
}
