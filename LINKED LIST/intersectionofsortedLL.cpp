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

node *sortedinsert(node *a, node *b)
{
    if(a==NULL || b==NULL)
    {
        return NULL;
    }
    if(a->data < b->data)
    {
        return sortedinsert(a->next, b);
    }
    if(a->data > b->data)
    {
        return sortedinsert(a, b->next);
    }
    node *temp = new node();
    temp->data= a->data;
    temp->next= sortedinsert(a->next, b->next);

    return temp;
}

int main()
{
    node *a= NULL;
    node *b= NULL;
    node *intersect= NULL;
    push(&a, 6);
    push(&a, 5);
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);

    push(&b, 8);
    push(&b, 6);
    push(&b, 4);
    push(&b, 2);

    intersect= sortedinsert(a, b);

    printlist(a);
    printlist(b);
    printlist(intersect);

    return 0;
}