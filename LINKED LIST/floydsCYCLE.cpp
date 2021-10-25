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

bool detectloop(node *head)
{
    node *slow= head;
    node *fast= head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast= fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node *head= NULL;
    push(&head, 1);
    push(&head, 122);
    push(&head, 15);
    push(&head, 155);
    push(&head, 31);
    push(&head, 5);

    head->next->next->next= head;
    if(detectloop(head))
    {
        cout<<"loop is present"<<endl;
    }
    else
    {
        cout<<"list is loop free"<<endl;
    }

    return 0;
}