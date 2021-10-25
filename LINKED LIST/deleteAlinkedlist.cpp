#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    while (head!= NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void push(node **head,int data)
{
    node *new_node = new node();
    new_node->data= data;
    new_node->next = *head;
    *head = new_node;
}

void deletelist(node **head)
{
    node *curr= *head;
    node *next= NULL;
    while (curr!=NULL)
    {
        next= curr->next;
        free(curr);
        curr= next;
    }
    *head= NULL;
}

int main()
{
    node *head = NULL;
    
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);
    push(&head, 333);

    printlist(head);

    deletelist(&head);

    printlist(head);
    cout<<"Linked list deleted. "<<endl;

    return 0;
}