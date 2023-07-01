#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
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
int res=INT_MIN;
int func(Node* root)
{
    if(root==NULL) return 0;
    int ls,rs;
    ls=func(root->left);
    rs=func(root->right);
    res=max(res,ls+rs+root->key);
    return (root->key+ls+rs);
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
    root->left->left->left=new Node(40);
    root->left->right->right=new Node(50);
    func(root);
    cout<<res<<endl;
    return 0;
}