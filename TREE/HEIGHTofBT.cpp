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
int height(Node* root)
{
    if(root==NULL) return 0;
    else return 1+max(height(root->left),height(root->right));
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
    cout<<height(root)<<endl;
    return 0;
}