#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
bool func(Node* root, int target)
{
    if(root==NULL) return false;
    if(root->left==NULL && root->right==NULL)
    {
        if(target-(root->key)==0) return true; 
    }   
    return func(root->left,target-(root->key))||func(root->right,target-(root->key));
}
int main()
{
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
    cout<<func(root,70)<<endl;
    return 0;
}