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
bool find(Node* root,vector<Node*> &p,int n)
{
    if(root==NULL) return false;
    p.push_back(root);
    if(root->key==n) return true;
    if(find(root->left,p,n) || find(root->right,p,n)) return true;
    p.pop_back();
    return false;
}
Node* lca(Node* root,int n1,int n2)
{
    vector<Node*> path1,path2;
    if(find(root,path1,n1)==false || find(root,path2,n2)==false) return NULL;
    for(int i=0;i<path1.size()-1&&i<path2.size()-1;i++)
    {
        if(path1[i+1]!=path2[i+1]) return path1[i];
    }
    return NULL;
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(14);
    root->right=new Node(12);
    root->left->left=new Node(34);
    root->left->right=new Node(77);
    root->right->left=new Node(55);
    root->right->right=new Node(98);
    Node* curr=lca(root,34,55);
    cout<<curr->key<<endl;
    return 0;
}
