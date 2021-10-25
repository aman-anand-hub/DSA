#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data= data;
    }
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
    node *new_node= new node(data);
    new_node->next= *head;
    *head= new_node;
}

void insertinlist(node **head, int element)
{
    node *curr;
    if(*head==NULL || (*head)->data > element)
    {
        node* new_node = new node(element);
        new_node->next =  *head;
        *head= new_node;
    }
    else
    {
        curr= *head;
        while (curr->next!=NULL && curr->next->data < element)
        {
            curr= curr->next;
        }
        node* new_node = new node(element);
        new_node->next= curr->next;
        curr->next= new_node;
    }
}

int main()
{
    node *head= NULL;
    push(&head, 7);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printlist(head);
    insertinlist(&head, 5);
    printlist(head);
    insertinlist(&head, 9);
    printlist(head);
    insertinlist(&head, 0);
    printlist(head);

    return 0;
}