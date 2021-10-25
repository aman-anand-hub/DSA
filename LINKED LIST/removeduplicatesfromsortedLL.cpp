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

void removeduplictes(node *head)
{
    node *curr= head;
    if(curr==NULL)
    {
        return;
    }
    while(curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            node *temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }
        curr= curr->next;
    }
}    

int main()
{
    node *head= NULL;
    push(&head, 71);
    push(&head, 51);
    push(&head, 22);
    push(&head, 22);
    push(&head, 1);
    printlist(head);
    removeduplictes(head);
    printlist(head);

    return 0;
}