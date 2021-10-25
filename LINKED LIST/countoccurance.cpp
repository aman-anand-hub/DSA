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
    node *new_node= new node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void countoccurance(node *head, int data)
{
    int freq=0;
    while (head!=NULL)
    {
        if(head->data==data)
        {
            freq++;
        }
        head= head->next;
    }
    cout<<freq<<endl;
}

int main()
{
    node *head= NULL;
    push(&head, 34);
    push(&head, 324);
    push(&head, 34);
    push(&head, 34);
    push(&head, 734);

    printlist(head);

    countoccurance(head, 34);

    return 0;
}