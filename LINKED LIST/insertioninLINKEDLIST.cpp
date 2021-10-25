#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void push(node **head, int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void printList(node *head)
{
    while (head->next!=NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void insertatstart(node *&head, int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void insertattail(node *&head, int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;

    while (head->next==NULL)
    {
        head->next = new_node;
    }

    node *temp= head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next= new_node;
}

void insertInBetween(node *&head, int position, int data)
{
    node *new_node = new node();
    new_node->data = data;
    node *temp = head;
    for (int i = 1; i < position-1; i++)
    {
        temp= temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    node *head = NULL;
    push(&head, 11);
    push(&head, 111);
    push(&head, 131);
    push(&head, 22);
    push(&head, 32);

    printList(head);

    insertatstart(head, 99);

    printList(head);

    insertattail(head, 224);

    printList(head);

    insertInBetween(head, 5, 29);
    
    printList(head);

    return 0;
}