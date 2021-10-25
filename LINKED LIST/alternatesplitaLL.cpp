#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node *next;
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
    new_node->next= *head;
    *head= new_node;
}

node *alternatesplit(node *head)
{
    if(!head)
    {
        return head;
    }
    node *head1= head;
    node *head2= head->next;
    node *head1temp= head;
    node *head2temp= head->next;
    node *curr= head2temp->next;
    while (curr && curr->next)
    {
        head1temp->next= curr;
        head2temp->next= curr->next;
        head1temp= head1temp->next;
        head2temp= head2temp->next;
        curr= curr->next->next;
    }
    if(curr!=NULL)
    {
        head1temp->next= curr;
        head1temp= head1temp->next;
    }
    head1temp->next= NULL;
    head2temp->next= NULL;

    return head2;
}

int main()
{
    node *head= NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printlist(head);
    node *head2= alternatesplit(head);
    printlist(head);
    printlist(head2);

}