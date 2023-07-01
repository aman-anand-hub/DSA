//same as inorder traversal
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
void levelordertraversal(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* curr=q.front();
        q.pop();
        cout<<curr->key<<' ';
        if(root->left) q.push(curr->left);
        if(root->right) q.push(curr->right);

    }
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(14);
    root->right=new Node(12);
    root->left->left=new Node(34);
    root->left->right=new Node(77);
    root->right->left=new Node(55);
    root->right->left=new Node(76);
    root->right->right=new Node(98);
    levelordertraversal(root);
    return 0;
}