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
void spiralTraversal(Node* root)
{
    if(root==NULL) return;
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Node* curr=s1.top();
            s1.pop();
            cout<<curr->key<<' ';
            if(curr->left) s2.push(curr->left);
            if(curr->right) s2.push(curr->right);
        }
        while(!s2.empty())
        {
            Node* curr=s2.top();
            s2.pop();
            cout<<curr->key<<' ';
            if(curr->right) s1.push(curr->right);
            if(curr->left) s1.push(curr->left);
        }
    }   
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
    root->right->right=new Node(70);
	spiralTraversal(root);
    return 0;
}