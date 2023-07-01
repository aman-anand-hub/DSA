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
bool isBalanced(Node* root)
{
    if(root==NULL) return true;
    int lh= height(root->left);
    int rh= height(root->right);
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    cout<<isBalanced(root)<<endl;
    return 0;
}