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
int isBalanced(Node* root)
{
    if(root==NULL) return 0;
    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh=isBalanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return 1+max(lh,rh);
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
    if(isBalanced(root)) cout<<"IS BALANCED"<<endl;
    else cout<<"NOT BALANCED"<<endl;
    return 0;
}