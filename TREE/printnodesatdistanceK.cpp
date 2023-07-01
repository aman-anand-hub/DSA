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
void PrintAtdistance(Node* root, int k)
{
    if(root==NULL) return;
    if(k==0)
    {
        cout<<root->key<<' ';
        return;
    }
    PrintAtdistance(root->left,k-1);
    PrintAtdistance(root->right,k-1);
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(14);
    root->right=new Node(12);
    root->left->left=new Node(34);
    root->left->right=new Node(77);
    root->right->left=new Node(76);
    root->right->right=new Node(98);
    PrintAtdistance(root,3);
    return 0;
}