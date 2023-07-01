#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int k)
    {
        data=k;
        left=right=NULL;
    }
};
void PostorderREC(node *root)
{
    if(!root) return;
    PostorderREC(root->left);
    PostorderREC(root->right);
    cout<<root->data<<' ';
}
void PostorderIT(node *root)
{
    if(!root) return;
    vector<int> v;
    stack<node*> s;
    s.push(root);
    while(!s.empty())
    {
        node* temp=s.top();
        s.pop();
        v.push_back(temp->data);
        if(temp->left) s.push(temp->left);
        if(temp->right) s.push(temp->right);
    }
    reverse(v.begin(),v.end());
    for(auto x:v) cout<<x<<' ';
}
int main()
{
    node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    PostorderREC(root);
    cout<<endl;
    PostorderIT(root);
    cout<<endl;
}