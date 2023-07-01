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
void InorederIT(node *root)
{
    if(!root) return;
    stack<node*> s;
    node *curr=root;
    while(!s.empty()  || curr)
    {
        while(curr)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<' ';
        curr=curr->right;
    }
}
void InorderREC(node *root)
{
    if(!root) return;
    InorderREC(root->left);
    cout<<root->data<<' ';
    InorderREC(root->right);
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
    InorderREC(root);
    cout<<endl;
    InorederIT(root);
    cout<<endl;
}