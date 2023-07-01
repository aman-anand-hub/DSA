#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node* left; node*right;
    node(int key)
    {
        val=key;
        left=right=NULL;
    }
};
vector<int> ans;
void glns(node* root)
{
    if(root==NULL||(root->left==NULL&&root->right==NULL))
    {
        return;
    }
    if(root->left!=NULL&&root->right==NULL)
    {
        ans.push_back(root->left->val);
    }
    if(root->left==NULL&&root->right!=NULL)
    {
        ans.push_back(root->right->val);
    }
    glns(root->left);
    glns(root->right);
}
vector<int> gln(node* root)
{
    glns(root);
    return ans;
} 

int main()
{
    node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->right->right= new node(5);
    root->right->right->right= new node(6);
    vector<int> km=gln(root);
    for(auto it: km) cout<<it<<' ';
}