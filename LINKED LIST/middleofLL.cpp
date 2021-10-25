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
        head = head->next;
    }
    cout<<endl;
}

void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data = data;
    new_node->next = *head;
    *head= new_node;
}

void printmiddle(node *head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node *slow= head;
        node *fast= head;
        while (fast!=NULL && fast->next!= NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
        }
        cout<<"Middle element of the list is: "<<slow->data<<endl;
    }
}

int main()
{
    node *head= NULL;
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);

    printlist(head);

    printmiddle(head);

    return 0;
}