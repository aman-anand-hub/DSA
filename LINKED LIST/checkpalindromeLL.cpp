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
    new_node->data= data;
    new_node->next= *head;
    *head= new_node;   
}

bool checkpalidrome(node *head)
{
    node *slow=head;
    node *fast=head;
    while (fast!=NULL &&fast->next!=NULL)
    {
        slow= slow->next;
        fast= fast->next->next;
    }
    node *curr= slow;
    node *prev=NULL;
    node *next;
    while (curr!=NULL)
    {
        next= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
    }
    fast= head;
    while (prev!=NULL)
    {
        if(prev->data!=fast->data)
        {
            return false;
        }
        prev=prev->next;
        fast=fast->next;
    }
    return true;
}

int main()
{
    node *head=NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printlist(head);

    if(checkpalidrome(head))
    {
        cout<<"List is palindrome."<<endl;
    }   
    else
    {
        cout<<"list is not palindrome."<<endl;
    }

    return 0;
}