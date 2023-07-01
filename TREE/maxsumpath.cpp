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
    int ls=func(root->left);
    int rs=func(root->right);
    int x=max(ls,ls+root->key);
    int y=max(rs,rs+root->key);
    res=max(res,max(ls+rs+root->key,max(x,y)));
    return max(x,y);
}
int main()
{
    Node* root= new Node(-10);
    root->left= new Node(9);
    root->right= new Node(20);
    root->right->left= new Node(15);
    root->right->right= new Node(7);
    func(root);
    cout<<res<<endl;
    return 0;
}