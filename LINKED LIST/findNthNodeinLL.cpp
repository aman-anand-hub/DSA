#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void push(node **head, int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next= *head;
    *head= new_node;
}

void findnode(node *head, int position)
{
    node *temp= head;
    for(int i=1; i<=position-1; i++)
    {
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);

    printlist(head);    

    findnode(head, 3);
    findnode(head, 1);

    return 0;
}