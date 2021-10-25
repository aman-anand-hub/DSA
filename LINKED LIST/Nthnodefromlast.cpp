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

void push(node **head,int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void Nthnodefromlast(node *head, int N)
{
    int lenght=0;
    node *temp = head;
    while (temp!=NULL)
    {
        temp= temp->next;
        lenght++;
    }
    if(lenght<N)
    {
        return;
    }
    temp= head;
    for (int i = 1; i < lenght-N+1; i++)
    {
        temp = temp->next;
    }
    cout<<N<<"th element from the last is: "<<temp->data<<endl;
}

int main()
{
    node *head =NULL;

    push(&head, 447);
    push(&head, 427);
    push(&head, 473);
    push(&head, 847);
    push(&head, 457);

    printlist(head);

    Nthnodefromlast(head, 1);
    Nthnodefromlast(head, 3);

    return 0;  
}