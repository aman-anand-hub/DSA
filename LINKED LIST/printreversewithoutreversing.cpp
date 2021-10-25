#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    while(head)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data= data;
    new_node->next= *head;
    *head= new_node;
}

void printreverse(node *head)
{
    if(head==NULL)
    {
        return;
    }
    printreverse(head->next);
    cout<<head->data<<" ";
}

int main()
{
    node *head= NULL;
    push(&head, 11);
    push(&head, 41);
    push(&head, 13);
    push(&head, 121);
    push(&head, 111);
    printlist(head);
    printreverse(head);

    return 0;
}