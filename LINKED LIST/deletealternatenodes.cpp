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

void deletealernate(node *head)
{
    if(!(head))
    {
        return;
    }
    node *curr= head->next;
    node *temp= head;
    while (curr && curr->next && temp)
    {
        temp->next= curr->next;
        free(curr);
        temp= temp->next;
        if(temp)
        {
            curr= temp->next;
        }
    }
}

int main()
{
    node *head= NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printlist(head);
    deletealernate(head);
    printlist(head);

    return 0;
}
