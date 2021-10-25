#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
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

void reverseList(node **head)
{
    node *prev=NULL;
    node *curr=*head;
    node *next=NULL;
    while (curr!=NULL)
    {
        next= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
    }
    *head= prev;
}

int main()
{
    node *head= NULL;
    push(&head, 213);
    //push(&head, 283);
    //push(&head, 235);
    //push(&head, 273);
    //push(&head, 3);
    //push(&head, 33);
    printlist(head);
    reverseList(&head);
    printlist(head);

    return 0;
}