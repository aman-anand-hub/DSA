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
void maxWidth(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    int res=0;
    while(!q.empty())
    {
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++)
        {
            Node* curr=q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    cout<<res<<endl;
}
int main()
{
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
    maxWidth(root);
    return 0;
}