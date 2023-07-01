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
        right=left=NULL;
    }
};
void preorder(Node* root)
{
    if(root==NULL) return;
    cout<<root->key<<' ';
    preorder(root->left);
    preorder(root->right);
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
    preorder(root);
    return 0;
}