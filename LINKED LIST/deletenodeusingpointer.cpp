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
    node *new_node= new node();
    new_node->data = data;
    new_node->next =  *head;
    *head = new_node;
}

void printlist(node *head)
{
    while (head!= NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void deleteusingpointer(node *ref)
{
    node *prev;
    if(ref==NULL)
    {
        return;
    }
    else
    {
        ref->data = ref->next->data;
        node *prev = ref;
        ref= ref->next;
        prev->next= ref->next;
        free(ref);
    }
}

int main()
{
    node *head = NULL;
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);

    printlist(head);

    deleteusingpointer(head->next);

    printlist(head);

    return 0;
}