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
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void push(node **head, int data)
{
    node *new_node= new node;
    new_node->data= data;
    new_node->next= *head;
    *head= new_node;
}

void deletebyptr(node *head)
{
    node *temp=head;
    node *prev=NULL;

    temp->data= temp->next->data;
    prev=temp;
    temp= temp->next;
    prev->next= temp->next;
    free(temp);
}

int main()
{
    node *head= NULL;
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);
    push(&head, 333);

    printlist(head);
    
    deletebyptr(head->next->next);
    printlist(head);

    return 0;
}