#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void printlist(node *head)
{
    while (head)
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
    new_node->prev= NULL;
    new_node->next= *head;
    if(*head!=NULL)
    {
        (*head)->prev= new_node;
    }
    *head= new_node;
}

void reverse(node **head)
{
    node *temp= NULL;
    node *curr= *head;
    while (curr)
    {
        temp= curr->prev;
        curr->prev= curr->next;
        curr->next= temp;
        curr= curr->prev;
    }
    if(temp)
    {
        *head= temp->prev;
    }
}

int main()
{
    node *head= NULL;
    push(&head, 2);
    push(&head, 92);
    push(&head, 7);
    push(&head, 22);
    push(&head, 775);
    push(&head, 25);

    printlist(head);

    reverse(&head);

    printlist(head);

    return 0;
}