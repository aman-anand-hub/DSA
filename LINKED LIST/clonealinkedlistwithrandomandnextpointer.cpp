#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *random;
    node (int data)
    {
        this->data= data;
    }
} *head= NULL;

void printlist(node *head)
{
    while(head)
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

node *clonelist(node *head)
{
    node *curr= head;
    node *temp;
    while(curr)
    {
        temp= curr->next;
        curr->next= new node(curr->data);
        curr->next->next= temp;
        curr= curr->next->next;
    }
    curr= head;
    while (curr)
    {
        curr->next->random= curr->random? curr->random->next : curr->random;
        curr= curr->next->next;
    }
    node *original= head;
    node *copy= head;
    temp = copy;
    while (original && copy)
    {
        original->next= original->next->next;
        copy->next= copy->next? copy->next->next : copy->next;
        original= original->next;
        copy= copy->next;
    }
    return temp;   
}

int main()
{
    push(&head,98);
    push(&head,52);
    push(&head,112);
    push(&head,123);
    push(&head,53);

    printlist(head);

    return 0;
}