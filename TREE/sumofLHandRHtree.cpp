#include<bits/stdc++.h>
using namespace std;
#define fastio ios_bse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
int SumofNodes(Node* root)
{
    if(root==NULL) return 0;
    else return (root->key+SumofNodes(root->left)+SumofNodes(root->right));
}
void func(Node* root)
{
    int ls=SumofNodes(root->left);
    int rs=SumofNodes(root->right);
    cout<<ls<<' '<< rs<<' '<<endl;
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
    func(root);
    return 0;
}