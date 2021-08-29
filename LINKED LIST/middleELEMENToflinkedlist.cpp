#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void push(node**  head_ref, int data)
{
    node* new_node = new node;
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(node *n)
{
    while (n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }   
}

void mid(node* head)
{
    int count=0;
    node* mid= new node;
    mid= head;

    while (head!=NULL)
    {
        if(count & 1)
        {
            mid= mid->next;
        }

        ++count;
        head = head->next;
    }
    if(mid != NULL)
    {
        cout<<"the mid element is: "<<mid->data<<endl;
    }
}

int main()
{
    node * head= NULL;
    int n;
    cout<<"enter N: "<<endl;
    cin>>n;
    cout<<"enter the number of nodes: "<<endl;
    for (int i = n; i>0; i--)
    {
        push(&head, i);
        printList(head);
        mid(head);
        cout<<endl;
    }
    

    return 0;
}