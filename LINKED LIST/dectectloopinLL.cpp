#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    bool flag= false;
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

bool detectloop(node *head)
{
    node *temp= head;
    while (temp!=NULL)
    {
        if(temp->flag==true)
        {
            return true;
        }

        temp->flag= true;
        temp= temp->next;
    }
    return false;
}

int main()
{
    node *head=NULL;
    push(&head, 1);
    push(&head, 1);
    push(&head, 1);
    push(&head, 1);
    push(&head, 1);
    push(&head, 1);

    if(detectloop(head))
    {
        cout<<"loop is present."<<endl;
    }
    else
    {
        cout<<"List is loop free."<<endl;
    }

    return 0;
}