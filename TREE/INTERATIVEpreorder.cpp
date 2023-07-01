#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int k)
    {
        data=k;
        left=NULL;
        right=NULL;
    }
};
void PreorderIT(node *root)
{
    if(!root) return;
    stack<node*> s;
    s.push(root);
    while(!s.empty())
    {
        node *curr=s.top();
        cout<<curr->data<<' ';
        s.pop();
        if(curr->right) s.push(curr->right);
        if(curr->left) s.push(curr->left);
    }
    cout<<endl;
}
void PreorderREC(node *root)
{
    if(!root) return;
    cout<<root->data<<' ';
    PreorderREC(root->left);
    PreorderREC(root->right);
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
    PreorderIT(root);
    PreorderREC(root);
}